#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be checked.
 * @accept: The string of acceptable characters.
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int match;

	count = 0;
	while (*s)
	{
		match = 0;

		for (char *a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				match = 1;
				break;
			}
		}

		if (!match)
			break;

		s++;
	}

	return (count);
}
