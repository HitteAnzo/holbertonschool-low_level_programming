#include <stdio.h>

/**
 * main - print the number of argument.
 * @argc: number of argument.
 * @argv: array of argument.
 * Return: 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
