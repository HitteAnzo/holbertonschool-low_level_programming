#include "main.h"

/**
 *rev_string - Reverses a string.
 *@s: The string to reverse.
 *
 *Return: void.
 */
void rev_string(char *s)
{
	int i = 0;
	int len;
	char *start, *end, storage;

	/**
	 * Measuring the length of the string
	 */
	while (s[i] != '\0')
		i++;
	len = i;

	start = s;
	end = s;

	/**
	 * Making *end point at the last char of the string
	 */
	for (i = 0; i < len - 1; i++)
		end++;

	/**
	 * Reversing the string
	 */
	for (i = 0; i < len / 2; i++)
	{
		storage   = *end;
		*end   = *start;
		*start = storage;

		start++;
		end--;
	}

}
