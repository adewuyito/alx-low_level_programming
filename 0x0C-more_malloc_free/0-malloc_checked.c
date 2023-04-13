#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Assign dynamic memory
 * @b: The space required
 *
 * Return: A pointer to the space created
 */
void *malloc_checked(unsigned int b)
{
	int *i;

	i = (int *)malloc(b);
	if (i == NULL)
	{
		exit(98);
	}

	return (i);
}
