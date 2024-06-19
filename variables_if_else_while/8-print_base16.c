#include <stdio.h>

/**
 * main - Prints digits of base 16 in lowercase.
 *
 * Return: Nothing
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{	
		putchar(c);
	}
	putchar('\n');

	return (0);
}
