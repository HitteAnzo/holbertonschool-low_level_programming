#include <stdio.h>

/**
 * main - print all numbers 1 to 100. 
 * Description: Add Fizz, Buzz and FizzBuzz depenting of the multiple.
 * Return: 0 on success.
 */
int main(void)
{
	int i;
	{
		for (i = 1; i <= 100; i++)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf(" FizzBuzz");
			}
			else if (i % 5 == 0)
			{
				printf(" Buzz");
			}
			else if (i % 3 == 0)
			{
				printf(" Fizz");
			}
			else if	(i == 1)
			{
				printf("%d", i);
			}
			else
			{
				printf(" %d", i);
			}
		}
		printf("\n");
	}
	return (0);
}
