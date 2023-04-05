#include "main.h"

/**
 * _strpbrk - Returns the first instance of a byte
 * @s: The string to search
 * @accept: The byte to search for
 *
 * Return: The pointer to the byte if precent or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		char *p;

		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}

	return (NULL);
}
