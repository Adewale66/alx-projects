#include "search_algos.h"

/**
 * linear_search - Searches for a value using linear search algorithm
 * @size: size of array
 * @array: pointer to the first element in the array
 * @value: value to search for
 * Return: index or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
