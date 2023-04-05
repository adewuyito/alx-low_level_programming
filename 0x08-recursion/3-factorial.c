#include "main.h"

/**
 * factorial - Gets the factorial of a number
 * @n: The number to factorial
 *
 * Return: The number @n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
