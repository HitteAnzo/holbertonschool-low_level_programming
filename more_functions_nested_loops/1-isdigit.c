#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if a character is a digit (0 through 9)
 * @c: the character to check
 * 
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
