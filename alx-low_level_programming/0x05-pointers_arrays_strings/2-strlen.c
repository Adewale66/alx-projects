#include "main.h"

/**
 * _strlen -  returns the length of a string.
 * @s: first parameter
 * Return: integer
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
