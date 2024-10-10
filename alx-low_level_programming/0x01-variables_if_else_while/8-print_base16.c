#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int i = 48, j = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j < 103)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
