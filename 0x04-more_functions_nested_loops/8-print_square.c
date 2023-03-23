#include "main.h"

/**
 * print_square - Print squares to the terminal
 * @size: The number, size of the square
 * Return: Void
 */

void print_square(int size)
{
	int i, j, step;
	int hash;

	hash = 35;

	if (size <= 0)
	{
		step = 0;
		_putchar('\n');
	}
	else
	{
		step = size;
	}
	for (i = 1; i <= step; i++)
	{
		for (j = 1; j <= step; j++)
		{
			_putchar(hash);
		}
		_putchar('\n');
	}
}
