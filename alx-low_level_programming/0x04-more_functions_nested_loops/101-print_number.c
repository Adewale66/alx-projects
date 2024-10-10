#include "main.h"

/**
 * print_number - prints an integer
 * @n: The character to print
 *
 * Return: void.
 */

void print_number(int n)
{
	unsigned int value;

	if (n < 0)
	{
		value = -n;
		_putchar(45);
	}
	else
		value = n;
	if (value / 10)
		print_number(value / 10);
	_putchar((value % 10) + '0');
}

