#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Print x10 times alphabet in lowercase.
 *
 * Return: none.
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		return(0)
	}
}
