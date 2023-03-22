#include "main.h"

/**
 * print_last_digit - Print the last digit of an int
 * @n: The int to be checked
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int last;

	last = c % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');

	return (last);
}
