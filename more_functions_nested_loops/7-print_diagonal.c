#include "main.h"
#include <stdio.h>

/**
 * print_line - Print diagonal line on the terminal.
 * @n: the number of times the character \ should be printed.
 *
 * Description: If n is 0 or less, only prints \n.
 */
void print_diagonal(int n )
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i,j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
