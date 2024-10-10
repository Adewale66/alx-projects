#!/bin/usr/python3

""" add module for adding two numbers (int and float) """


def add_integer(a, b=98):
    """Function that adds two integers
    Args:
        a: first integer
        b: second integer
    Returns:
        The addition of the two integers
    Raises:
        TypeError: if a or b are not integers or floats
    """
    if type(a) is not int and type(a) is not float:
        raise TypeError("a must be an integer")
    if type(b) is not int and type(b) is not float:
        raise TypeError("b must be an integer")
    return int(a) + int(b)
