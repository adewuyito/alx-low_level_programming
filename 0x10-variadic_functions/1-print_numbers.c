#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: the separator
 * @n: the number to print
 *
 * Return: Void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
		{
			separator = "";
		}
		printf("%d%s", va_arg(arg, int), separator);
	}
	printf("\n");
	va_end(arg);
}
