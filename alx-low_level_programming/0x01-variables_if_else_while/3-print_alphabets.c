#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alphabets in lowercase and uppercase
 *
 * Return: 0
 */

int main(void)
{
	int i = 97, j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
