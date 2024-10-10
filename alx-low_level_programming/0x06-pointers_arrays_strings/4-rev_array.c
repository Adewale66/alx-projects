#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: integer array
 * @n: length of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	for (; i < n / 2; i++)
	{
		int temp = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
