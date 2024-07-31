#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index/mlp.
 * @n: pointer to an unsigned long int.
 * @index: index of the bit to clear.
 * Return: 1 on success, -1 if fail.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
