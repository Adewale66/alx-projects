#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main program
 * @argv: argments
 * @argc: args count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*op)(int, int);
	char *symbol;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	symbol = argv[2];
	op = get_op_func(argv[2]);

	if (op)
	{
		if ((*symbol == '/' || *symbol == '%') && atoi(argv[3]) == 0)
		{
			puts("Error");
			exit(100);
		}
		printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}

	puts("Error");
	exit(99);
}
