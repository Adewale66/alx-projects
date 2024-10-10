#include "main.h"

/**
 * _strcat -  concatenates two strings.
 * @dest: destination string parameter
 * @src: source string parameter
 * Return: char *
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, lenSrc = 0;

	while (dest[len] != '\0')
		len++;

	while (src[lenSrc] != '\0')
	{
		dest[len] = src[lenSrc];
		len++;
		lenSrc++;
	}
	dest[len] = '\0';
	return (dest);
}
