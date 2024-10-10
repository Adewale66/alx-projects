#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: character pointer
 * @c: character
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int len = 0;

	while (s[len] >= '\0')
	{
		if (s[len] == c)
			return (s + len);
		len++;
	}
	return ('\0');
}

