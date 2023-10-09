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

#endif /* DOG_H */
