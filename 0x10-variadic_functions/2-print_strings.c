#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: The separator
 * @n: Number of characters to print
 *
 * Return: Void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *string;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(arg, char *);
		if (string == NULL)
		{
			string = "(nil)";
		}
		if (separator == NULL || i == n - 1)
		{
			separator = "";
		}
		printf("%s%s", string, separator);
	}
	printf("\n");
	va_end(arg);
}
