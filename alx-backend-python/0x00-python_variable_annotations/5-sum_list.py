#!/usr/bin/env python3
"""
sum_list module
"""

import typing


def sum_list(input_list: typing.List[float]) -> float:
    """sum of floats in an array

    Args:
        input_list (typing.List[float]): array of floats

    Returns:
        float: sum of floats
    """
    return sum(input_list)
