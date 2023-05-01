#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - initialiase a dog struct
 * @name: pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 *
 * Return: A pointer to the initialized dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);

	return (d);
}

