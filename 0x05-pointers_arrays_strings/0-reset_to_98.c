#include <stdio.h>
/**
 * reset_to_98 - Assigns pointer value
 * @n: pointer variable
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;
	printf("%d", *n);
}
