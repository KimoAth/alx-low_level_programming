#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a dog struct with given values.
 * @d: The struct to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
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
