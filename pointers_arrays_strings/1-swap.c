#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap value of 2 int.
 * @a: int swap to b.
 * @b: swap to a.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;

}
