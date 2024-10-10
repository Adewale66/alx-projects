#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concats two strings
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: char *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i = 0, j;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n >= l2)
		n = l2;

	c = (char *)malloc(l1 + n + 1);
	if (c == NULL)
		return (NULL);

	for (; i < l1; i++)
		c[i] = s1[i];

	for (j = 0; j < n; j++)
		c[i++] = s2[j];

	c[i] = '\0';
	return (c);
}
