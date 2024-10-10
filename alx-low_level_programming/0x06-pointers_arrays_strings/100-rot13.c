#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string parameter
 * Return: char *
 */

char *rot13(char *s)
{
	int i, j;
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_val[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (s[i] == characters[j])
			{
				s[i] = rot_val[j];
				break;
			}
	return (s);
}
