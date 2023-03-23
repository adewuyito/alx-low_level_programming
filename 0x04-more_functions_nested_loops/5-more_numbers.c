#include "main.h"

/**
 * more_numbers - Print Numbers 1 - 14, 10x
 *
 * Return: Void
 */

void more_numbers(void)
{
	int repetition, tents, units;

	repetition = 0;
	while (repetition <= 10)
	{
		int count;

		count = 0;
		while (count <= 14)
		{
			if (count > 9)
			{
				tents = count / 10;
				_putchar(tents + '0');
			}
			units = count % 10;
			_putchar(units + '0');
			count++;
		}
		_putchar('\n');
		repetition++;
	}
}
