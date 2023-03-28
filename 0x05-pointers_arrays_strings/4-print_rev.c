#include "main.h"
#include <string.h>

/**
 * print_rev - to print a string in rev
 * @s: the string to be printed
 * Return: Void
 */

void print_rev(char *s)
{
	int count, i;

	count = strlen(s);
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
