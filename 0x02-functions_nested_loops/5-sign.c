#include "main.h"

/**
 * print_sign - Print the sign of numb
 * @c: The int to cck
 * Return: 1 for +, -1 for -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		-putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
