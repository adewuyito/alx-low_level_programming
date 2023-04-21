#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Void
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *str, *seperator = "";

	va_list arg;

	va_start(arg, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", seperator, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", seperator, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", seperator, va_arg(arg, double));
				break;
			case 's':
				str = va_arg(arg, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", seperator, str);
				break;
			default:
				i++;
				continue;
			}
			seperator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(arg);
}

