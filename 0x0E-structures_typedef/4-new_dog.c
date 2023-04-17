#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d = malloc(sizeof(dog_t));
    if (d == NULL)
        return NULL;

    d->name = strdup(name);
    if (d->name == NULL) {
        free(d);
        return NULL;
    }

    d->age = age;

    d->owner = strdup(owner);
    if (d->owner == NULL) {
        free(d->name);
        free(d);
        return NULL;
    }

    return d;
}
