#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, j;
	char c;

	if (size < 1)
		printf("\n");
	else
		for (i = 0; i < size; i += 10)
		{
			printf("%08x: ", i);
			for (j = i; j < i + 10 && j < size; j += 2)
				printf("%02x%02x ", (unsigned char)b[j], (unsigned char)b[j + 1]);
			for (; j < i + 10; j += 2)
				printf("     ");
			for (j = i; j < i + 10 && j < size; j++)
			{
				c = b[j];
				if (c >= ' ' && c <= '~')
					printf("%c", c);
				else
					printf(".");
			}
			printf("\n");
		}
}
