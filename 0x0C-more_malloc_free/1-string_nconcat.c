#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concats two strings to the nth byte
 * @s1: First string
 * @s2: Second string
 * @n: Ending byte
 *
 * Return: Pointer to memory location
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem_location;
	unsigned int sum;
	size_t size1;
	size_t size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size1 = strlen(s1);
	size2 = strlen(s2);

	if (n >= size2)
	{
		n = size2;
	}

	sum = size1 + n;
	mem_location = malloc(1 + (sum * sizeof(char)));

	if (mem_location == NULL)
	{
		return (NULL);
	}

	strcpy(mem_location, s1);
	strncat(mem_location, s2, n);

	return (mem_location);
}
