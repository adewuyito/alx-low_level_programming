#include "main.h"
#include <string.h>

/**
 * puts_half - prints half a string to the stdio
 * @str: the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int len, n, i;

	len = strlen(str);
	n = len / 2;
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
