#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 * Return: char *
 */

char *cap_string(char *s)
{
	int len = 1, j;
	char c[] = ",;.!?\"(){}";

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;


	while (s[len] != '\0')
	{
		int t = s[len - 1];

		if (t == 32 || t == 9 || t == 10)
		{
			if (s[len] > 96 && s[len] < 123)
				s[len] -= 32;
		}
		for (j = 0; j < 10; j++)
		{
			if (t == (int) c[j])
			{
				if (s[len] > 96 && s[len] < 123)
					s[len] -= 32;
				break;
			}
		}
		len++;
	}

	return (s);
}
