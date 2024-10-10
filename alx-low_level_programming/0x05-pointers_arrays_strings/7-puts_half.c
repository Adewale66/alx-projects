#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string parameter
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len / 2) + 1;

	for (; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}

