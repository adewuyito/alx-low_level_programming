#include "main.h"

/**
 * times_table - Prints out the 9 times table
 *
 * Return: Void
 */

void times_table(void)
{
	int i, j, k, tens_digit, ones_digit;
	int space = 32;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		_putchar(',');
		for (j = 1; j < 10; j++)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar(space);
				_putchar(space);
			}
			else
			{
				_putchar(space);
				tens_digit = k / 10;
				_putchar(tens_digit + '0');
			}
			ones_digit = k % 10;
			_putchar(ones_digit + '0');
			_putchar(',');
		}
		_putchar('\n');
	}
}
