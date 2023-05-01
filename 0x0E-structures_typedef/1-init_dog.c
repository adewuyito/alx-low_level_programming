#include "dog.h"

/**
 * init_dog - initialiase a dog struct
 * @d: pointer to var
 * @name: pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
