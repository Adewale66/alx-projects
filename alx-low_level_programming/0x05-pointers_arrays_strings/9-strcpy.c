#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src
 * @dest : destination parameter
 * @src: source parameter
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (src[len] != '\0')
		len++;

	for (; i <= len; i++)
		dest[i] = src[i];
	return (dest);
}
