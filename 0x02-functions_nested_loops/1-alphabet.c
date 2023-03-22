#include "main.h"

/**
 * print_alphabet - Print the alphabet
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		++a;
	}
	_putchar('\n');

}
