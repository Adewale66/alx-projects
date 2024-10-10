#include "main.h"

/**
 * more_numbers - prints 10 times the nnumbers, from 0 to 14.
 *
 * Return: void.
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			k = j;
			if (j < 10)
				k *= 10;
			_putchar((k / 10) + '0');
			if (j > 9)
				_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
