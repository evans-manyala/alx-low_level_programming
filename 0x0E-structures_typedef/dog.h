#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Structure defines the properties of a dog.
 * @name: Name of the dog.
 * @owner: Owner of the dog.
 * @age: Age of the dog.
 *
 * Description: This structure represents a dog and contains
 * information about its name, owner, and age.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
