#include "main.h"
#include <string.h>

/**
 * rev_string - Reverse a string
 * @s: The string to be reversed
 * Return: Void
 */

void rev_string(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
