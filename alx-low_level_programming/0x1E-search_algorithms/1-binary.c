#include "search_algos.h"

/**
 * binary_search - searches for a value using binary search
 * @array: pointer to first element
 * @size: size of the array
 * @value: value to find
 * Return: index if found or -1;
 */

int binary_search(int *array, size_t size, int value)
{

	int l = 0;
	int r = size - 1;

	while (l <= r)
	{
		int mid = l + (r - l) / 2;
		int i = l;

		printf("Searching in array: ");
		for (; i < r; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[r]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
