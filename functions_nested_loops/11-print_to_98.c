#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Description: This function prints all natural numbers from the
 * starting number 'n' to 98, followed by a new line.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}
	}
	else

		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}

	putchar('\n');
}
