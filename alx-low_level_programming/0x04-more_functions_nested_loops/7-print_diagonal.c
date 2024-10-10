#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The number of times to print
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i - 1; j++)
			_putchar(32);
		_putchar(92);
		_putchar('\n');
	}
}
