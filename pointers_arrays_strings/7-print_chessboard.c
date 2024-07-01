#include <stdio.h>
#include "main.h"

/*
 * print_chessboard - Prints the chessboard represented by a 2D array of characters.
 * @a: Pointer to the 2D array of characters representing the chessboard.
 *
 * This function iterates through each row of the chessboard array and prints
 * each character to stdout using putchar. Each row is printed on a new line.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
