#include <stdio.h>
#include <stdlib.h>
/**
 * main - Display alphabet without 'q' and 'e'.
 *
 * Return: Nothing.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (!(alphabet == 'q' || alphabet == 'e'))
		{
			putchar(alphabet);
		}
	}
	putchar('\n');

	return (0);
}
