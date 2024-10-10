#!/usr/bin/python3

"""Sqauare class"""


class Square:
    """Square class"""
    def __init__(self, size) -> None:
        """Init method

        Args:
            size (int): The size of the square
        """
        self.size = size

    @property
    def size(self):
        """Size getter

        Returns:
            int: The size of the square
        """
        return self.__size

    @size.setter
    def size(self, value):
        """Size setter

        Args:
            value (int): The size of the square

        Raises:
            TypeError: If size is not an integer
            ValueError: If size is less than 0
        """
        if type(value) is not int:
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        """Area of the square

        Returns:
            int: Area of the square
        """
        return self.__size ** 2

    def my_print(self):
        """Prints the square"""
        if self.__size == 0:
            print()
        else:
            for _ in range(self.__size):
                [print("#", end="") for _ in range(self.__size)]
                print("")
