#!/usr/bin/python3

class Square:
    """
    Square class represents a geometric square.

    Attributes:
        __size (int): The size of the square.
    """

    def __init__(self, size):
        """
        Initializes a new instance of the Square class.

        Args:
            size (int): The size of the square.

        Note:
            This method does not perform type or value verification.
        """
        self.__size = size
