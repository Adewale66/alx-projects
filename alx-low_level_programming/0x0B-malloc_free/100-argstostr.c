#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen - gets the length of a string
 * @s: string to count
 * Return: int
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}



/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: args count
 * @av: args strings
 * Return: char pointer
 */

char *argstostr(int ac, char **av)
{
	int j, i = 0, len = 0, total_len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
		if (av[i] != NULL)
			total_len += _strlen(av[i]) + 1;

	s = (char *) malloc(total_len + 1);

	if (s == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[len] = av[i][j];
			len++;
		}
		s[len] = '\n';
		len++;
	}
	s[len] = '\0';
	return (s);
}


