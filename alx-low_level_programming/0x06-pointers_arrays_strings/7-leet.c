#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: String parameter
 * Return: char *
 */

char *leet(char *s)
{
	int i;
	int leet[256];

	for (i = 0; i < 256; i++)
		leet[i] = 0;

	leet[97] = leet[65] = 52;
	leet[101] = leet[69] = 51;
	leet[111] = leet[79] = 48;
	leet[116] = leet[84] = 55;
	leet[108] = leet[76] = 49;

	for (i = 0; s[i] != '\0'; i++)
		if (leet[(int) s[i]] != 0)
			s[i] = leet[(int) s[i]];
	return (s);
}
