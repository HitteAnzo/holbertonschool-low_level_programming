#include "main.h"

/**
 * puts_half -  prints half of a string
 *@str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, j = 0, h = 0;


	for  (i = 0; str[i] != 0; i++)
	{
	}

	j = i / 2;
	if ((i % 2) != 0)
	{
		j = (i + 1) / 2;

	}


	for (h = j; str[h] != 0; h++)
	{
		_putchar(str[h]);

	}


	_putchar('\n');

}
