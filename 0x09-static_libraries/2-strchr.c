#include "main.h"
#include <string.h>

/**
 * _strchr - Gets the position of a char in a string
 * @s: The string to search
 * @c: The character to be serched
 * Return: The c position at s
 */
char *_strchr(char *s, char c)
{
	int i, len;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
