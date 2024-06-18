#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Checks if a random number is positive, negative or 0.
 *
 * Return: Returns nothing after printing
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	else if	(n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
