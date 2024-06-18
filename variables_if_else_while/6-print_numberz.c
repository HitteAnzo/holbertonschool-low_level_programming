#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all digits of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
    {
		putchar(48 + a);
    }
	putchar('\n');

	return (0);
}
