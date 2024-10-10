#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * valid_num - checks if a number is valid
 * @str: string
 * Return: bool;
 */

bool valid_num(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		if (str[i] < '0' || str[i] > '9')
			return (false);
	return (true);
}


/**
 * main - multiplies two postive numbers
 * @argc: args count
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *num1_str;
	char *num2_str;
	unsigned long res, num1, num2;

	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}
	num1_str = argv[1];
	num2_str = argv[2];

	if (!(valid_num(num1_str)) || !(valid_num(num2_str)))
	{
		puts("Error");
		exit(98);
	}

	num1 = strtoul(num1_str, NULL, 10);
	num2 = strtoul(num2_str, NULL, 10);
	res = num1 * num2;

	printf("%lu\n", res);

	return (0);

}
