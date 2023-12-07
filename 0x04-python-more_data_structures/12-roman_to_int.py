#!/usr/bin/python3
def roman_to_int(roman_string):
    if not roman_string or not isinstance(roman_string, str):
        return 0

    dictn = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    value = 0
    prev_value = 0

    for numeral in reversed(roman_string):
        current_value = dictn[numeral]

        if current_value < prev_value:
            value -= current_value
        else:
            value += current_value

        prev_value = current_value

    return value
