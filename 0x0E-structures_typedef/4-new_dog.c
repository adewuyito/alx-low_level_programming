#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialiase a dog struct
 * @name: pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int *d;

        d = malloc(sizeof(struct dog));
        if (d == NULL)
        {
                return (NULL);
        }
        d->name = name;
        d->age = age;
        d->owner = owner;

       return (d);
}
