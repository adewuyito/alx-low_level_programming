#include "main.h"

/**
 * print_line - Prints _ as a line to the terminal
 * @n: Number or times the line would print
 * Return: Void
 */

void print_line(int n)
{
	int count;
	int step;

	count = 0;
	if (n < 0)
	{
		step = 0;
	}
	else
	{
		step = n;
	}
	while (count !=  step)
	{
		_putchar(95);
		count++;
	}
	_putchar('\n');
}
