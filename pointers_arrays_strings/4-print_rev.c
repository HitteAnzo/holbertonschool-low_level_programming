#include "main.h"

/**
 * print_rev - print a reverse string.
 * @s: a string.
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;
	int j;
	while (s[i] != 0)
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
