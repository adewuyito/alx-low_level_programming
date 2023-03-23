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
		_putchar(count + '0');
		count++;
	}
	_putchar('\n');
}
