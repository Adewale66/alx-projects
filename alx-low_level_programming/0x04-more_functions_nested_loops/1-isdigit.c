#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: The character parameter
 *
 * Return: On success 1.
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
