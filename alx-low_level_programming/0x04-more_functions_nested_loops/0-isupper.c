#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: The character parameter
 *
 * Return: On success 1, otherwise 0.
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
