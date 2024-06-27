#include "main.h"

/**
 * rev_string - print a string and his reverse.
 * @s: string.
 */

void rev_string(char *s)
{
	int i = 0, j = 0, temp = 0;

	while (s[i] != 0)
	{
		i++;
	}

	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}
}
