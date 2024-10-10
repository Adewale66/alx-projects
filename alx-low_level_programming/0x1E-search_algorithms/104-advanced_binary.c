#include "search_algos.h"

/**
 * recursive_bs - uses recursion for binary search
 * @arr: array
 * @l: start
 * @r: end
 * @x: value
 * Return: -1 or first index
 */

int recursive_bs(int *arr, int l, int r, int x)
{

	if (l < r)
	{
		int mid = l + (r - l) / 2;

		int i = l;

		printf("Searching in array: ");
		for (; i <= r; i++)
		{
			printf("%i", arr[i]);

			if (i != r)
				printf(", ");
		}
		printf("\n");

		if (arr[mid] < x)
			return (recursive_bs(arr, mid + 1, r, x));

		return (recursive_bs(arr, l, mid, x));
	}
	if (arr[l] != x)
	{
		printf("Searching in array: %i\n", arr[l]);
		return (-1);
	}

	return (l);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located, or -1
 */

int advanced_binary(int *array, size_t size, int value)
{

	if (!array)
		return (-1);

	return (recursive_bs(array, 0, size - 1, value));
}
