#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    new = list(map(lambda x: False if x % 2 else True, my_list))
    return new
