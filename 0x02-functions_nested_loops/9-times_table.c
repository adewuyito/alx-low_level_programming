#include "main.h"

/**
 * times_table - Prints out the 9 times table
 *
 * Return: Void
 */

void times_table(void)
{
	int x, y, z, units_digit, tens_digit;
	int space = 32;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (z > 9)
			{
				units_digit = z % 10;
				tens_digit = (z - units_digit) / 10;
				_putchar(44);
				_putchar(space);
				_putchar(tens_digit + '0');
				_putchar(units_digit + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(space);
					_putchar(space);
				}
				_putchar(z + '0');

			}
		}
		_putchar('\n');
	}
}
