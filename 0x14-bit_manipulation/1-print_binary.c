#include "main.h"

/**
 * print_binary - converts integer to binary
 * @n: The integer value
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = n;
	int msb_found = 0;
	int i;

	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		unsigned long int mask = (1UL << i);

		if (num & mask)
		{
			_putchar('1');
			msb_found = 1;
		}
		else if (msb_found)
		{
			_putchar('0');
		}
	}
	if (!msb_found)
	{
		_putchar('0');
	}
}
