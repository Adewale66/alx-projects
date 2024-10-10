#!/usr/bin/env python3
"""
to_kv module
"""

import typing


def to_kv(k: str, v: typing.Union[int, float]) -> typing.Tuple[str, float]:
    """returns a tuple

    Args:
        k (str): string
        v (typing.Union[int, float]): float or int

    Returns:
        typing.Tuple[str, float]: tuple
    """
    return (k, v**2)
