#!/usr/bin/python3
def remove_char_at(str, n):
    str_copy = ""
    if n < 0 or n > len(str):
        return str
    else:
        for num in range(len(str)):
            if num != n:
                str_copy += str[num]
        return str_copy
