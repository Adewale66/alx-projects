#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: char pointer
 * @accept: char pointer
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int f = 0, len = 0;
	int j;

	while (s[len] != '\0')
	{
		j = 0;
		for (; accept[j] != '\0'; j++)
			if (s[len] == accept[j])
			{
				f++;
				break;
			}
		len++;
		if (f != len)
			break;
	}
	return (f);
}
