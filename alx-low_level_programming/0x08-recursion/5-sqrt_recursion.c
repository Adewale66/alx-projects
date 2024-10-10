#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int parameter
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (get_natural(1, n));
}

/**
 * get_natural - helper function to get natural number
 * @n: number
 * @c: current number
 * Return: int
 */


int get_natural(int c, int n)
{
	if (c * c == n)
		return (c);
	else if (c * c > n)
		return (-1);
	else
		return (get_natural(c + 1, n));
}

