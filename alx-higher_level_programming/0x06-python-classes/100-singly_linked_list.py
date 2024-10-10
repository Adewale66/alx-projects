#!/usr/bin/python3

"""Singly linked list module"""


class Node:
    """Node class"""
    def __init__(self, data, next_node=None) -> None:
        """Init method

        Args:
            data (int): data of the node
            next_node (Node, optional): next node. Defaults to None.
        """
        self.data = data
        self.next_node = next_node

    @property
    def data(self):
        """Data getter

        Returns:
            int: data of the node
        """
        return self.__data

    @data.setter
    def data(self, value):
        """Data setter

        Args:
            value (int): data of the node

        Raises:
            TypeError: If data is not an integer
        """
        if type(value) is not int:
            raise TypeError("data must be an integer")
        self.__data = value

    @property
    def next_node(self):
        """Next node getter

        Returns:
            Node: next node
        """
        return self.__next_node

    @next_node.setter
    def next_node(self, value):
        """Next node setter

        Args:
            value (Node): next node
        """
        if type(value) is not Node and value is not None:
            raise TypeError("next_node must be a Node object")
        self.__next_node = value


class SinglyLinkedList:
    """Linked list"""

    def __init__(self) -> None:
        """init method"""
        self.__head = None

    def sorted_insert(self, value):
        """Inserts a node in a sorted linked list

        Args:
            value (int): value of the node
        """
        new_node = Node(value)
        if self.__head is None:
            self.__head = new_node
            return
        if self.__head.data > value:
            new_node.next_node = self.__head
            self.__head = new_node
            return
        current = self.__head
        while current.next_node is not None:
            if current.next_node.data > value:
                break
            current = current.next_node
        new_node.next_node = current.next_node
        current.next_node = new_node

    def __str__(self) -> str:
        """String representation of the linked list

        Returns:
            str: linked list
        """
        current = self.__head
        string = ""
        while current is not None:
            string += str(current.data) + "\n"
            current = current.next_node
        return string[:-1]
