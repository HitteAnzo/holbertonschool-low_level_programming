#include <stdio.h>
#include <stdlib.h>
/**
 * main - Display  digits of base 10.
 *
 * Return: nothing.
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');

	return (0);
}
