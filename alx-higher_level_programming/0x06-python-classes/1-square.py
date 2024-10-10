#!/usr/bin/python3

"""Sqaure class """


class Square:
    """ Sqaure class with size attribute"""
    def __init__(self, size) -> None:
        """Initializes the data.

        Args:
            size (int): The size of the square.
        """
        self.__size = size
