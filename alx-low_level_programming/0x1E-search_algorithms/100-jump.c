#include "search_algos.h"

/**
 * min - returns the min of two values
 * @a: int a
 * @b: int b
 * Return: a || b
 */

size_t min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}

/**
 * jump_search - searches for a value using Jump search algorithm
 * @array: pointer to the first element
 * @size: size of the array
 * @value: value to find
 * Return: index of value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = sqrt(size);

	if (!array)
		return (-1);
	while (array[min(jump, size) - 1] < value)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		i = jump;
		jump += sqrt(size);
		if (i >= size)
			return (-1);
	}
	printf("Value found between indexes [%li] and [%li]\n", jump - i, jump);
	while (array[i] < value)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		i++;
		if (i == min(jump, size))
			return (-1);
	}
	if (array[i] == value)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		return (i);
	}
	return (-1);
}
