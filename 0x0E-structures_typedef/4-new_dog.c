#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog with the given attributes.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: A pointer to the newly created dog,
 * or NULL if memory allocation fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr = malloc(sizeof(dog_t));

	if (dog_ptr == NULL)
	{
		return (NULL);
	}

	dog_ptr->name = strdup(name);
	dog_ptr->owner = strdup(owner);

	if (dog_ptr->name == NULL || dog_ptr->owner == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr->owner);
		free(dog_ptr);

		return (NULL);
	}

	dog_ptr->age = age;
	return (dog_ptr);
}
