#include <stdio.h>

/**
 * main - printd the number of args
 * @argc: number of args
 * @argv: string array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
