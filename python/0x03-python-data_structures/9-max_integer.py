#!/isr/bin/python3
def max_integer(my_list=[]):
    from functools import reduce
    if len(my_list) == 0:
        return None
    else:
        big = reduce(lambda x, y:x if x > y else y, my_list)
        return big
