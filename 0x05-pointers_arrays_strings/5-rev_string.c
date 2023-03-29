#include "main.h"
#include <string.h>

/**
 * rev_string - Reverse a string
 * @s: The string to be reversed
 * Return: Void
 */

void rev_string(char *s)
{
	char *start;
	char *end;

	start = s;
	end = s + strlen(s) - 1;
	while (start < end)
	{
		char temp;

		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
