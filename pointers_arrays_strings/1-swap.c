#include "main.h"

/**
 * swap_int - Swaps the values of two ints.
 *@a: will give its value to b.
 *@b: will give its value to a.
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int storage = *a;
	*a = *b;
	*b = storage;
}
