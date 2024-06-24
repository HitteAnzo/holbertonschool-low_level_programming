#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print number 0 to 14, 10 times
 *
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
