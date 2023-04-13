#!/usr/bin/python3

def best_score(a_dictionary):
    if a_dictionary is None:
        return None
    else:
        #value = 0
        num = max(a_dictionary.values())
        for key in a_dictionary.keys():
            if a_dictionary[key] == num:
                return key

