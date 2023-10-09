#include "dog.h"

/**
 * init_dog -  This structure represents a dog and contains
 * information about its name, owner, and age.
 * @name: Name of the dog.
 * @owner: Owner of the dog.
 * @age: Age of the dog.
 * @d: pointer.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
