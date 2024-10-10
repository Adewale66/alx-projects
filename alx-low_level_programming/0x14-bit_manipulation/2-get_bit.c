#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1 << index, check;

	if (index > 63)
		return (-1);

	check = mask & n;
	return ((check >> index) & 1);
}
