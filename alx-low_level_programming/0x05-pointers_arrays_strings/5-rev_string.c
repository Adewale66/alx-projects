#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string parameter
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, i = 0;

	while (s[len] != '\0')
		len++;

	for (; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
