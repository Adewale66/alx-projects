#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int bitCount = 1, temp = n, i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (temp != 0)
	{
		i++;
		temp >>= 1;
	}

	bitCount = bitCount << (i - 1);

	for (; i > 0; i--)
	{
		if (n & bitCount)
			_putchar('1');
		else
			_putchar('0');
		bitCount >>= 1;
	}
}
