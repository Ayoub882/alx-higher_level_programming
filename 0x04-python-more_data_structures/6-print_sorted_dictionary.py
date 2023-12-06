#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    # Sort the keys and iterate through them
    for key in sorted(a_dictionary.keys()):
        # Print each key and its corresponding value
        print("{}: {}".format(key, a_dictionary[key]))
