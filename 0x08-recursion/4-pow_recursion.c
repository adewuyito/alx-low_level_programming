#include "main.h"

/**
 * _pow_recursion - Gets the power of a number rasied to another number
 * @x: The number to raise
 * @y: The number to raise by
 *
 * Return: @x
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, (y - 1)));
}
