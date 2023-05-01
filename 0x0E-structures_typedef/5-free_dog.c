#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free the memory space alocated for dog_t
 * @d: The pointer to the dog_t
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
