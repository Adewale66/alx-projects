#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @hay: char pointer
 * @needle: char pointer
 *
 * Return: pointer
 */

char *_strstr(char *hay, char *needle)
{
	while (*hay)
	{
		char *h = hay;
		char *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
			return (hay);
		hay++;
	}
	return ('\0');
}
