#include <stdio.h>
#include <stdlib.h>
/**
 * main - Display the alphabet in lowercase and in uppercase.
 *
 * Return: Nothing.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
