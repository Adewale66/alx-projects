#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all of it's paramters
 * @n: args count
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		va_end(args);
		return (0);
	}

	for (; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);

}
