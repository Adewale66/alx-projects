#!/usr/bin/python3

""" Sqaure class"""


class Square:
    """Sqaure Class"""
    def __init__(self, size=0) -> None:
        """Initilize the data

        Args:
            size (int, optional): the size. Defaults to 0.
        """
        if not isinstance(size, int):
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        self.__size = size
