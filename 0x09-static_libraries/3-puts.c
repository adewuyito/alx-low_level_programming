#include "main.h"

/**
 * _puts - Prints a string to the terminal
 * @str: the string to be printed
 * Return: Void
 */

void _puts(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}