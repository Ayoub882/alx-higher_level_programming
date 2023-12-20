#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    printed_i = 0
    for i in range(printed_i, x):
        try:
            print("{:d}".format(my_list[i]), end='')
            printed_i += 1
        except (ValueError, TypeError):
            pass
    print()
    return printed_i
