#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet x10
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			++a;
		}
		i += 1;
		_putchar('\n');;
	}
}
