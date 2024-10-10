#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of ints
 * @min: min value
 * @max: max value
 * Return: int *
 */

int *array_range(int min, int max)
{
	int *a;
	int len, i = 0;

	if (min > max)
		return (NULL);
	len = max - min + 1;

	a = (int *) malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);

	for (; min <= max; i++)
		a[i] = min++;

	return (a);

}
