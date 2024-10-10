#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 * @dest: destination parameter
 * @src: source parameter
 * @n: buffer size to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
