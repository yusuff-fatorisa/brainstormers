#!/usr/bin/python3
def uppercase(str):
    for m in str:
        if ord(m) >= ord("a") and ord(m) <= ord("z"):
            n = chr(ord(m) - 32)
            print("{}".format(n), end="")
        else:
            print("{}".format(m), end="")
    print()
