#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first parameter
 * @n2: second parameter
 * @r: third paramter
 * @size_r: size
 *
 * Return: char *
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, i, j, carry, max_len, k, start, end, digit1, sum, digit2;

	start = k = len1 = j = i = len2 = carry = 0;
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 > len2)
		max_len = len1;
	else
		max_len = len2;
	if (size_r <= max_len + 1)
		return (0);
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry > 0; i--, j--, k++)
	{
		if (i >= 0)
			digit1 = n1[i] - '0';
		else
			digit1 = 0;
		if (j >= 0)
			digit2 = n2[j] - '0';
		else
			digit2 = 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
	}
	r[k] = '\0';
	end = k - 1;
	while (start < end)
	{
		char temp = r[start];

		r[start] = r[end];
		r[end] = temp;
		start++;
		end--;
	}
	return (r);
}
