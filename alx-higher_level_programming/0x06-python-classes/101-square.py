#!/usr/bin/python3

"""Sqaure class"""


class Square:
    """Square class"""
    def __init__(self, size=0, position=(0, 0)) -> None:
        """Init method

        Args:
            size (int, optional): Size. Defaults to 0.
            position (tuple, optional): position. Defaults to (0,0).
        """
        self.size = size
        self.position = position

    @property
    def size(self):
        """Size getter

        Returns:
            int: Size
        """
        return self.__size

    @size.setter
    def size(self, value):
        """Size setter

        Args:
            value (int): Size

        Raises:
            TypeError: if size is not an integer
            ValueError: if size is less than 0
        """
        if isinstance(value, int) is False:
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >=0")
        self.__size = value

    @property
    def position(self):
        """Position getter

        Returns:
            tuple: Position
        """
        return self.__position

    @position.setter
    def position(self, value):
        """Position setter

        Args:
            value (tuple): Position

        Raises:
            TypeError: if position is not a tuple of 2 positive integers
        """
        if (not isinstance(value, tuple) or
                len(value) != 2 or
                not all(isinstance(num, int) for num in value) or
                not all(num >= 0 for num in value)):
            raise TypeError("position must be a tuple of 2 positive integers")
        self.__position = value

    def area(self):
        """Area

        Returns:
            int: Area
        """
        return self.__size ** 2

    def my_print(self):
        """Prints the square
        """
        if self.__size == 0:
            print()
            return
        for _ in range(self.__position[1]):
            print()
        for _ in range(self.__size):
            print(" " * self.__position[0], end="")
            print("#" * self.__size)

    def __str__(self):
        """String representation

        Returns:
            str: String representation
        """
        if self.__size == 0:
            return ""
        s = ""
        for _ in range(self.__position[1]):
            s += "\n"
        for _ in range(self.__size):
            s += " " * self.__position[0]
            s += "#" * self.__size
            s += "\n"
        return s[:-1]
