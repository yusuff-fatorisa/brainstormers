#!/usr/bin/python3
if __name__ == "__main__":
    import hidden_4
    for val in dir(hidden_4):
        if val[:2] != "__":
            print(val)
