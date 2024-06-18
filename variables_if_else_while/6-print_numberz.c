#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all digits of base 10
 * 
 * Return: Nothing.
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++);
	{
		putchar(048 + a);
	}
	putchar('\n');

	return (0);
}
