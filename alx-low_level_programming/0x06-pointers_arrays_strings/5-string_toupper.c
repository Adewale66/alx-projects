#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string parameter
 * Return: char *
 */

char *string_toupper(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		if (s[len] > 96 && s[len] < 123)
			s[len] -= 32;
		len++;
	}
	return (s);
}
