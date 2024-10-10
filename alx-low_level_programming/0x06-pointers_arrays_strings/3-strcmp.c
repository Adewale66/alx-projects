#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string parameter
 * @s2: second string parameter
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int len = 0;

	while (s1[len] != '\0' && s1[len] == s2[len])
		len++;
	return (s1[len] - s2[len]);
}
