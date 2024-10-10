#include "main.h"

/**
 * _memset -function that fills memory with a constant byte
 * @s: pointer paramater
 * @b: character paramter
 * @n: int parameter
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;
	return (s);
}
