#!/usr/bin/python3
def search_replace(my_list, search, replace):
    new = [replace if search == x else x for x in my_list]
    return new
