#!/usr/bin/python3

"""Sqaure class"""


class Square:
    """Square class with size attribute"""
    def __init__(self, size=0) -> None:
        """Init method

        Args:
            size (int, optional): Size. Defaults to 0.
        """
        self.size = size

    @property
    def size(self):
        """Size getter

        Returns:
            int: Size of the square
        """
        return self.__size

    @size.setter
    def size(self, value):
        """Size setter

        Args:
            value (int): Size of the square

        Raises:
            TypeError: If size is not an integer
            ValueError: If size is less than 0
        """
        if isinstance(value, int) is False:
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

    def __eq__(self, __value: object) -> bool:
        """Equal method

        Args:
            __value (Square): Other square

        Returns:
            bool: True if equal, False otherwise
        """
        return self.area() == __value.area()

    def __ne__(self, __value: object) -> bool:
        """Not equal method

        Args:
            __value (Square): Other square

        Returns:
            bool: True if not equal, False otherwise
        """
        return self.area() != __value.area()

    def __lt__(self, __value: object) -> bool:
        """Less than method

        Args:
            __value (Square): Other square

        Returns:
            bool: True if less than, False otherwise
        """
        return self.area() < __value.area()

    def __le__(self, __value: object) -> bool:
        """Less than or equal method

        Args:
            __value (Square): Other square

        Returns:
            bool: True if less than or equal, False otherwise
        """
        return self.area() <= __value.area()

    def __gt__(self, __value: object) -> bool:
        """Greater than method

        Args:
            __value (Square): Other square

        Returns:
            bool: True if greater than, False otherwise
        """
        return self.area() > __value.area()

    def __ge__(self, __value: object) -> bool:
        """Greater than or equal method

        Args:
            __value (Square): Other square

        Returns:
            bool: True if greater than or equal, False otherwise
        """
        return self.area() >= __value.area()
