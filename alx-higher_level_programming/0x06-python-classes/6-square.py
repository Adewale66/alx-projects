#!/usr/bin/python3

"""Square class"""


class Square:
    """Square class"""
    def __init__(self, size=0, postion=(0, 0)) -> None:
        """Initialize a square

        Args:
            size (int, optional): Size of the sqaure. Defaults to 0.
            postion (tuple, optional): postion of the new sqaure.
        """
        self.size = size
        self.position = postion

    @property
    def size(self):
        """Get size of the square

        Returns:
            int: size of the square
        """
        return self.__size

    @size.setter
    def size(self, value):
        """Set size of the square

        Args:
            value (int): size of the square

        Raises:
            TypeError: if size is not an integer
            ValueError: if size is less than 0
        """
        if type(value) is not int:
            raise TypeError("size must be an integer")

        if value < 0:
            raise ValueError("size must be >= 0")

        self.__size = value

    @property
    def position(self):
        """Get position of the square

        Returns:
            tuple: position of the square
        """
        return self.__position

    @position.setter
    def position(self, value):
        """Set position of the square

        Args:
            value (tuple): position of the square

        Raises:
            TypeError: if position is not a tuple of 2 positive integers
        """
        if type(value) is not tuple or len(value) != 2 or \
                type(value[0]) is not int or value[0] < 0 or \
                type(value[1]) is not int or value[1] < 0:
            raise TypeError("position must be a tuple of 2 positive integers")

        self.__position = value

    def area(self):
        """Get area of the square

        Returns:
            int: area of the square
        """
        return self.__size ** 2

    def my_print(self):
        """Print the square
        """
        if self.__size == 0:
            print()
            return

        for _ in range(self.__position[1]):
            print()

        for _ in range(self.__size):
            print(" " * self.__position[0], end="")
            print("#" * self.__size)
