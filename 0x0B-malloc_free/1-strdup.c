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

	size = strlen(str);
	final = (char *)malloc(size * sizeof(char));
	if (size == 0 || str == NULL || final == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		final[i] = str[i];
	}

	return (final);
}
