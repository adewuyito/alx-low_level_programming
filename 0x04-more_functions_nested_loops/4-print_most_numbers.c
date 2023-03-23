#include "main.h"

/**
 * print_most_numbers - Prt numbers 0 - 9 without 4 && 2
 *
 * Return: Void
 */

void print_most_numbers(void)
{
	int count = 0;

	while (count != 10)
	{
		if (count == 2 || count == 4)
		{
			count++;
		}
		else
		{
		_putchar(count + '0');
		++count;
		}
	}
	_putchar('\n');)
}
