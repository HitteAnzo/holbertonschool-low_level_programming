#include "main.h"

/**
 *puts2 - Prints every even character index of a string.
 *@str: Pointer to the string to print.
 *
 *Return: void.
 */

void puts2(char *str)
{
	int count = 0;
	int i = 0;

	while (str[count])
		count++;

	while (i < count)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
