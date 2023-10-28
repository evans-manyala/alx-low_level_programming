#include "main.h"
/**
 * get_bit - Function returns the index of a bit given.
 * @n: integer value.
 * @index: index value of a bit
 * Return: Value of the index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	m = 1 << index;

	return ((n & m) >> index);
}
