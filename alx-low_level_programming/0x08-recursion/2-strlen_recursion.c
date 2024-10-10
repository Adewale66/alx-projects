#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string parameter
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = 1 + _strlen_recursion(++s);
	return (len);
}
