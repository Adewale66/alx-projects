#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number
 * Return: 1 if true, 0 if false
 */

int is_prime_number(int n)
{
	return (is_prime(2, n));
}

/**
 * is_prime - prime helper
 * @n: positon parameter
 * @num: number to check
 * Return: 1 if true, 0 if false
 */

int is_prime(int n, int num)
{
	if (num % n == 0 || num < 2)
		return (0);
	else if (n == num - 1)
		return (1);
	else if (num > n)
		return (is_prime(n + 1, num));
	return (1);
}
