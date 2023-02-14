#!/usr/bin/python3
def uniq_add(my_list=[]):
    new = []
    sum  = 0
    for i in range(len(my_list)):
        if i == 0:
            sum += my_list[i]
            new.append(my_list[i])
        else:
            if my_list[i] in new:
                pass
            else:
                sum += my_list[i]
                new.append(my_list[i])
    return sum
