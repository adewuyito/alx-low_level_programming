#include "variadic_functions.h"

/**
 * sum_them_all - Sum's some values
 * @n: number of values
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
