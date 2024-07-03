#include "main.h"
#include <stdio.h>

/**
 * * power_operation - finds the square root of a number.
 * @n: the number for which to calculate the square root.
 * @c: the candidate to be the square root of n.
 */
int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));

}
/**
 * * _sqrt_recursion - returns the square root of a number.
 * @n: the number for which to calculate the square root.
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
