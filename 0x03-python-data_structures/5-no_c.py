#!/usr/bin/python3
def no_c(my_string):
    result = ""
    for i in range(len(my_string)):
        if my_string[i] == 'C' or my_string[i] == 'c':
            pass
        else:
            result += my_string[i]
    return result
