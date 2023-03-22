#include "main.h"

/**
 * print_last_digit - Print the last digit of an int
 * @n: The int to be checked
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		int con;

		con = n * -1;
		last = con;
	}
	else
	{
		last = n;
	}
	last = last % 10;
	_putchar(last + '0');

	return (last);
}
