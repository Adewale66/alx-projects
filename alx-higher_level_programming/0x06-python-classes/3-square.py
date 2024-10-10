#!/usr/bin/python3

"""Sqaure class"""


class Square:
    """Square class"""
    def __init__(self, size=0) -> None:
        """Intialize a square

        Args:
            size (int, optional): The size of the sqaure. Defaults to 0.
        """
        if not isinstance(size, int):
            raise TypeError("size must be an integer")
        if size < 0:
            raise ValueError("size must be >= 0")
        self.__size = size

    def area(self):
        """Calculate the area of the square

        Returns:
            [int]: The area of the square
        """
        return self.__size ** 2
