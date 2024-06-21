#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 * Return: last digit value
 */
int print_last_digit(int n)
{
	int last_digi t;

	if (n < 0)
	{
	last_digit = -(n % 10);
	}
	else
	{
		last_digit = n % 10;
	}

	_putchar('0' + last_digit);
	return (last_digit);
}
