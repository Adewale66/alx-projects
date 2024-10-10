#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry Point
 *
 * Description: 'programme that prints to standard error'
 *
 * Return: 1 (Success).
 */

int main(void)
{
	char *m = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, m, 59);
	return (1);
}
