#include "main.h"
#include <stdlib.h>

/**
 * _strlen - gets the length of a string
 * @s: string to count
 * Return: int
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0' && s[l] != ' ')
		l++;
	return (l);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to cahr pointer
 */


char **strtow(char *str)
{
	char **t;
	int i = 0, l = 0, strle, j;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[i] != '\0'; i++)
		if (str[i] != ' ')
			if (i - 1 < 0 || str[i - 1] == ' ')
				l++;
	if (l == 0)
		return (NULL);
	t = (char **) malloc(sizeof(char *) * (l + 1));
	if (t == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		strle = 0;
		while (*str != '\0')
		{
			if (*str != ' ')
			{
				strle = _strlen(str);
				break;
			}
			str++;
		}
		t[i] = (char *) malloc(sizeof(char) * strle + 1);
		if (t[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(t[j]);
			free(t);
			return (NULL);
		}
		for (j = 0; j < strle; j++, str++)
			t[i][j] = *str;
		t[i][j] = '\0';
	}
	t[l] = NULL;
	return (t);
}
