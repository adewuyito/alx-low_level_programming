#include "main.h"

/**
 * _puts_recursion - copies a string recursivly
 * @s: The string to copy
 * Return: Void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
