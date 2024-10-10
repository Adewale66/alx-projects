#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals.
 * @a: int pointer
 * @size: size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, left, right;

	left = right = i = 0;

	for (; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				left += *(a + i * size + j);
			if (i + j == size - 1)
				right += *(a + i * size + j);
		}
	}
	printf("%d, %d\n", left, right);
}
