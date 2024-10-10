#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: char pointer
 * @accept: char pointer
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int len = 0, j;

	while (s[len] != '\0')
	{
		j = 0;
		for (; accept[j] != '\0'; j++)
			if (s[len] == accept[j])
				return (s + len);
		len++;
	}

	return ('\0');
}
