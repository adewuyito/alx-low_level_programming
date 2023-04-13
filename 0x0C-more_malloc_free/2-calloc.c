#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Assigns memory like calloc
 * @nmemb: Ammount of items
 * @size: item size
 *
 * Return: Pointer to mem location
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *mem_location;
	size_t i;
	unsigned int ammount;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	amount = nmemb * size;
	mem_location = malloc(amount);
	if (mem_location == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= nmemb; i++)
	{
		mem_location[i] = 0;
	}

	return (mem_location);
}
