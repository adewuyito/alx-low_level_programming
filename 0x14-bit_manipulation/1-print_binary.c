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

	for (i = 16; i >= 0; i--)
	{
		int mask = (1 << i);

		if (num & mask)
		{
			_putchar('1');
			msb_found = 1;
		}
		else if (msb_found)
		{
			_putchar('0');
		}
		else if (num == 0)
		{
			_putchar('0');
			break;
		}
	}
}
