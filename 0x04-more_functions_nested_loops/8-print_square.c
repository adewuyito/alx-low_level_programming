#include "main.h"

/**
 * print_square - Print squares to the terminal
 * @size: The number, size of the square
 * Return: Void
 */

void print_square(int size)
{
	int i, j;
	int hash;

	hash = 35;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(hash);
		}
		_putchar('\n');
	}
}
