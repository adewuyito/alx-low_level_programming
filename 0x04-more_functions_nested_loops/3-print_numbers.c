#include "main.h"

/**
 * print_number - Prints the number 0 - 9
 *
 * Return: Void
 */

void print_numbers(void)
{
	int count;

	count = 0;
	while (count < 10)
	{
		_putchar(count);
		count++;
	}
	_putchar('\n');
}
