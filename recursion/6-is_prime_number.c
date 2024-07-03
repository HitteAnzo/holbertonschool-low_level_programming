#include "main.h"
#include <stdio.h>

/**
 *
 */
int is_prime(int n, int c)
{
	if (n == c)
		return (1);

	else if (n % c == 0)
		return (0);

	else if (n * n == c)
		return (n);

	return (is_prime(n, c + 1));
}

/**
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, 2));
}
