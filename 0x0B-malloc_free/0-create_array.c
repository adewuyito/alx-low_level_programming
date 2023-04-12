#include <stdlib.h>
#include "main.h"


/**
 * create_array - Creates an array and initializes with a char
 * @size: Size of the array
 * @c: Char to initialize with
 *
 * Return: returns a pointer to the char
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *)malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
