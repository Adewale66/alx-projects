#!/usr/bin/env python3
"""
make_multiplier module
"""

import typing


def make_multiplier(multiplier: float) -> typing.Callable[[float], float]:
    """takes a float and returns a function

    Args:
        multiplier (float): float param

    Returns:
        typing.Callable[[float], float]: a function
    """
    def wrapper(mult):
        return mult * multiplier
    return wrapper
