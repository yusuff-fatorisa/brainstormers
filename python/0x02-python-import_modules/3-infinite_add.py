#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    if len(argv) == 0:
        print("0")
    else:
        sum = 0
        for i in range(1, len(argv)):
            sum += int(argv[i])
        print(sum)
