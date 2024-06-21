#include "main.h"

/**
 * times_table - Prints tables of 0 to 9.
 *
 * Return: void
 */
void times_table(void)
{
	int time_table;
	int i;
	int multiple;

	char tens;
	char units;

	for (time_table = 0; time_table <= 9; time_table++)
	{
		for (i = 0; i <= 9; i++)
		{
			multiple = time_table * i;
			tens = multiple / 10;
			units = multiple % 10;

			if (multiple >= 10)
				_putchar(tens + '0');
			else if (i > 0)
				_putchar(' ');

			_putchar(units + '0');

			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
