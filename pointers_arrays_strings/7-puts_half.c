#include "main.h"

/**
 *puts_half - Prints the last half of a string.
 *@str: Pointer to the string to print.
 *
 *Return: void.
 */

void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len])
		len++;

	if (len % 2 != 0)
		len++;

	for (i = len / 2; str[i]; i++)
		_putchar(str[i]);

	_putchar('\n');
}
