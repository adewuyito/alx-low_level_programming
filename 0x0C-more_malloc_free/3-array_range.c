#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 *
 * @min: The minimum value for the array.
 * @max: The maximum value for the array.
 *
 * Return: A pointer to the newly created array, or NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *mem_location;
	int amount;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	amount = max - min + 1;
	mem_location = malloc(amount * sizeof(max));
	if (mem_location == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		mem_location[i] = min + i;
	}

	return (mem_location);
}
