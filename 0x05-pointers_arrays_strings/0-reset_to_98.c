#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - Assigns pointer value
 * @n: pointer variable
 * Return: void
 */
void reset_to_98(int *n)
{
	int var = 98;
	*n = var;
	printf("%d", *n);
}
