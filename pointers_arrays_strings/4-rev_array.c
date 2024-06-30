#include "main.h"

/**
 *reverse_array- Reverses an array of int.
 *@a: The array to reverse.
 *@n: number of elements to reverse
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;
	int *start = a;
	int *end = start + (n - 1);
	int storage;

	/**
	 * Reversing the values of the array
	 */
	for (i = 0; i < n / 2; i++)
	{
		storage   = *end;
		*end   = *start;
		*start = storage;

		start++;
		end--;
	}

}
