#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    from calculator_1 import add, sub, mul, div

    if len(argv) != 4:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        exit(1)
    elif argv[2] not in ["+", "-", "*", "/"]:
        print("Unknown operator. Available operators: +, -, * and /")
        exit(1)
    else:
        op_1 = int(argv[1])
        op = argv[2]
        op_2 = int(argv[3])
        if op == "+":
            print(f"{op_1} {op} {op_2} = {add(op_1, op_2)}")
        elif op == "-":
             print(f"{op_1} {op} {op_2} = {sub(op_1, op_2)}")
        elif op == "*":
             print(f"{op_1} {op} {op_2} = {mul(op_1, op_2)}")
        else:
             print(f"{op_1} {op} {op_2} = {div(op_1, op_2)}")
