#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Assigns memory like calloc
 * @nmemb: Ammount of items
 * @size: item size
 *
 * Return: Pointer to mem location
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_location;
	unsigned int amount;

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
	memset(mem_location, 0, amount);

	return (mem_location);
}
