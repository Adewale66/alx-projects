#!/usr/bin/env python3
"""LRU module.
"""

BaseCaching = __import__('base_caching').BaseCaching


class Node:
    """Node for linked list
    """

    def __init__(self, value) -> None:
        self.value = value
        self.next = None
        self.prev = None


class LinkedList:
    """Linked list Data structure
    """

    def __init__(self) -> None:
        self.items = 0
        self.head: Node = None
        self.tail: Node = None

    def add(self, key: Node):
        """Adds item to list
        """
        if self.head is not None:
            self.head.prev = key
            key.next = self.head
        else:
            self.tail = key
        self.head = key
        self.items += 1

    def remove(self, key):
        """Removes Node from list
        """
        item = self.getNode(key)
        if item is None:
            return None
        if item.next is not None:
            item.next.prev = item.prev
        if item.prev is not None:
            item.prev.next = item.next
        if self.head == item:
            self.head = item.next
        if self.tail == item:
            self.tail = item.prev
        self.items -= 1
        return item

    def getNode(self, key):
        """Gets Node
        """
        temp = self.head
        while temp is not None:
            if temp.value == key:
                return temp
            temp = temp.next
        return None

    def removeLast(self):
        """Removes last item
        """
        return self.remove(self.tail.value)


class LRUCache(BaseCaching):
    """LRU caching
    """

    def __init__(self):
        super().__init__()
        self.ll = LinkedList()

    def put(self, key, item):
        """ Add an item in the cache
        """
        if key is None or item is None:
            return
        if key in self.cache_data:
            self.ll.remove(key)
        elif self.ll.items == self.MAX_ITEMS:
            item_ = self.ll.removeLast()
            print("DISCARD: {}".format(item_.value))
            del self.cache_data[item_.value]
        self.ll.add(Node(key))
        self.cache_data[key] = item

    def get(self, key):
        """ Get an item by key
        """
        if key is None or key not in self.cache_data:
            return None
        node = self.ll.remove(key)
        self.ll.add(node)
        return self.cache_data.get(key)
