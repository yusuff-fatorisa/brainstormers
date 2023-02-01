#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    if len(tuple_a) > len(tuple_b):
        max = len(tuple_a)
    else:
        max = len(tuple_b)

    sum_list = []
    for i in range(max):
        if i < len(tuple_a):
            first = tuple_a[i]
        else:
            first = 0

        if i < len(tuple_b):
            second = tuple_b[i]
        else:
            second = 0
        sum_list.append(first + second)

    return tuple(sum_list)
