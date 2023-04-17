#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's profile
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: A struct that represents a dog's profile
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* functions prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
