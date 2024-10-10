#include "main.h"


/**
 * main - entry point
 *
 * Description: print _putchar
 *
 * Return: 0
 *
 */

int main(void)
{
	char a[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
