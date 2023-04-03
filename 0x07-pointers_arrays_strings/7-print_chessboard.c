#include "main.h"

/**
 * print_chessboard(char (*a)[8]) - Prints out the chess board
 * @a: Pointer to the chess
 * Return: Void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchr(a[i][j]);
		}
		_putchar('\n');
	}
}
