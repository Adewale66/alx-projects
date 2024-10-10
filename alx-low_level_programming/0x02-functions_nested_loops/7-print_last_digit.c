#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number parameter
 *
 * Return: int.
 */

int print_last_digit(int n)
{
	if (n % 10 < 0)
	{
		_putchar(48 + ((n % 10) * -1));
		return ((n % 10) * -1);
	}
	_putchar(48 + (n % 10));
	return (n % 10);
}
