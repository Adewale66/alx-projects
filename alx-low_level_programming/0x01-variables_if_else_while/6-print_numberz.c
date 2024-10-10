#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints from 0 - 9
 *
 * Return: 0
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
