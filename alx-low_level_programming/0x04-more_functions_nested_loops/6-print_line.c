#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the integer parameter
 *
 * Return: void.
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}
