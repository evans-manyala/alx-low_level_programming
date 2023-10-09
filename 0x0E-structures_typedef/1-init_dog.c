#include "dog.h"
#include <string.h>

/**
 * init_dog -  This structure represents a dog and contains
 * information about its name, owner, and age.
 * @name: Name of the dog.
 * @owner: Owner of the dog.
 * @age: Age of the dog.
 * @guok: pointer.
 */

void init_dog(struct dog *guok, char *name, float age, char *owner)
{
	if (dog != NULL)
	{
		strcpy(guok->name, name);
		strcpy(guok->owner, owner);
		guok->age = age;
	}
}
