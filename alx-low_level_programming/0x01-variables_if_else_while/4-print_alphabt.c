#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: prints leters except q amd e
 *
 *Return: Always 0
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
