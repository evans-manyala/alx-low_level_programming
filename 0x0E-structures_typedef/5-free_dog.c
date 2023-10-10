#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - Function that free dogs
 * @d: pointer to memory location with data.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);

	free(d);
}
