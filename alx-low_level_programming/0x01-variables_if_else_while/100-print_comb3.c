#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: 0
 *
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		int j = i + 1;

		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
