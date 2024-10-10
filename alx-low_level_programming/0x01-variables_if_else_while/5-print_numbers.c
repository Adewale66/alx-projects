#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: Prints numbers from 0 - 9
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
