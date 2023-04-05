#include "main.h"

/**
 * _print_rev_recursion - prints out the reverse of a string
 * @c: The string to reverse
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
