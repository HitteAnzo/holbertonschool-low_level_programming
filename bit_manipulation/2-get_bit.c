#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: unsigned long integer
 * @index: unsigned integer
 * Return: value of the bit at index, -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return((n >> index) & 1);
}


