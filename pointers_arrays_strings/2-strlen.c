#include "main.h"

/**
 *_strlen - Measures the length of a string.
 *@s: Pointer to the string we want to measure.
 *
 * Return: length of string as integer
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s)
	{
		s++;
		counter++;
	}
	return (counter);
}
