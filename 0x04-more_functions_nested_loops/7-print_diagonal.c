#include "main.h"

/**
 * print_diagonal - Prints diagonal line to the terminal
 * @n: Number or times the line would print
 * Return: Void
 */

void print_diagonal(int n)
{
	int i, step, diagonal, levels, space;

	diagonal = 92;
	space = 32;
	levels = 0;
	if (n < 0)
	{
		step = 0;
	}
	else
	{
		step = n;
	}
	while (levels < step)
	{
		int space_num;

		space_num = levels;
		for (i = 0; i <= space_num; i++)
		{
			_putchar(space);
		}
		_putchar(diagonal);
		_putchar('\n');
		levels++;
	}
}
