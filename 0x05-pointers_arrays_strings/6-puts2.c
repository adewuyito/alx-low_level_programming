#include "main.h"

/**
 * puts2 - Pronts every other char in a string
 * @str: String to print
 * Return: Void
 */


void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 != 0)
		{
			i++;
		}
		else
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
