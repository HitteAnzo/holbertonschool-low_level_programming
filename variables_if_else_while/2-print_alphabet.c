#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print lowercase alphabet.
 *
 * Return: nothing.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	
	return (0);
}
