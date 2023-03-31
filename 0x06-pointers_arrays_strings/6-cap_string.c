#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
	char *start = str;
	int cap_next = 1;

	while (*str != '\0')
	{
		if (cap_next && (*str >= 'a' && *str <= 'z'))
		{
			*str = *str - 32;
			cap_next = 0;
		}

		if (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == ',' || *str == ';' || *str == '.' ||
			*str == '!' || *str == '?' || *str == '\"' ||
			*str == '(' || *str == ')' || *str == '{' ||
			*str == '}')
			cap_next = 1;

		str++;
	}

	return (start);
}
