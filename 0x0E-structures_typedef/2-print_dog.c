#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints the details about the dog.
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	char *name, *owner;

	if (d)
	{
		name = d->name;
		owner = d->owner;

		if (!owner)
			owner = "(nil)";
		if (!name)
			name = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
	}
}
