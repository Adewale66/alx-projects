#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: args count
 * @argv: string array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int total = 0, i = 1;

	if (argc == 1)
		puts("0");
	else
	{
		for (; i < argc; i++)
		{
			char *e;
			int num = strtol(argv[i], &e, 10);

			if (*e != '\0')
			{
				puts("Error");
				return (1);
			}
			total += num;
		}
		printf("%d\n", total);
	}
	return (0);
}
