#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: callback function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
