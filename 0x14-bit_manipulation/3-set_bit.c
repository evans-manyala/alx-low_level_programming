#include "main.h"
/**
 * set_bit - Function sets the value of a bit to 1
 * at a given index.
 * @n: pointer value of the bit
 * @index: Postion of the bit
 * Return: 1 if it worked, -1 if it not.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	m = 1 << index;
	*n |= m;

	return (1);
}
