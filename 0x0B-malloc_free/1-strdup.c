#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Copies a string to a location
 * @str: The string to copy
 *
 * Return: The pointer to the new string
 */
char *_strdup(char *str)
{
	size_t size;
	unsigned int i;
	char *final;

	if (str == NULL) return (NULL);
	size = strlen(str);
	++size;
	final = (char *)malloc(size * sizeof(char));
	if (final == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		final[i] = str[i];
	}
	final[-1] = '\0';

	return (final);
}
