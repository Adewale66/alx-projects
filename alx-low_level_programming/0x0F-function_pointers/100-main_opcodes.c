#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints opcodes
 * @argc: args count
 * @argv: arguments
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int bytes, i = 0;
	char *a;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		puts("Error");
		exit(2);
	}

	a = (char *)main;
	for (; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		printf("%02hhx ", a[i]);
	}
	return (0);
}
