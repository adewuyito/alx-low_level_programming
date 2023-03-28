#include "main.h"

/**
 * print_rev - to print a string in rev
 * @s: the string to be printed
 * Return: Void
 */

void print_rev(char *s)
{
	int count, i;

	count = 0;
	while (*s != '\0')
	{
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
