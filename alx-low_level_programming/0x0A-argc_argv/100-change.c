#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min num of coins to make change
 * @argc: args count
 * @argv: string array
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int cents;
	int quarters, dimes, nickels, pennies, twoPenny;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		puts("0");
		return (0);
	}

	quarters = cents / 25;
	cents = cents - quarters * 25;

	dimes = cents / 10;
	cents = cents - dimes * 10;

	nickels = cents / 5;
	cents = cents - nickels * 5;

	twoPenny = cents / 2;
	cents = cents - twoPenny * 2;

	pennies = cents / 1;
	cents = cents - pennies;

	printf("%d\n", quarters + dimes + nickels + twoPenny +  pennies);
	return (0);
}
