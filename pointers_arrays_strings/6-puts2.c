#include "main.h"

/**
 * puts2 - every other character of a string
 * @str: number
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != 0; i++)
	{
		if  ((i % 2) == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
