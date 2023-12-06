#!/usr/bin/python3
def best_score(a_dictionary):
    # Check if the dictionary is not empty
    if a_dictionary:
        # Find the key with the maximum value using max() and a lambda function
        max_key = max(a_dictionary, key=lambda k: a_dictionary[k])
        return max_key
    else:
        # Return None if the dictionary is empty
        return None
