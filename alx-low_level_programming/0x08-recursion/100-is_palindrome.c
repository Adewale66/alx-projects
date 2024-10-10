#include "main.h"

/**
 * _strlen - helper function to get length
 * @s: string to find length
 * Return: int
 */

int _strlen(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen(s));
	}
	return (0);
}

/**
 * _palindrome_helper - checks if a string is a palindrome
 * @s: string
 * @length: length
 * @pos: position
 * @count: count
 * Return: int
 */

int _palindrome_helper(char *s, int length, int pos, int count)
{
	if (pos >= (length / 2))
	{
		if (count == length / 2)
			return (1);
		else
			return (0);
	}
	if (s[pos] == s[length - pos - 1])
		return (_palindrome_helper(s, length, ++pos, ++count));
	else
		return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (_palindrome_helper(s, len, 0, 0));
}
