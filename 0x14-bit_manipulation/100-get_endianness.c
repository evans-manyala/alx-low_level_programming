#include "main.h"
/**
 * get_endianness - Function get the order in which bytes
 * of a multi-byte data type are stored in memory.
 * Return: endian value
 */

int get_endianness(void)
{
	int x = 1;
	char *c = (char *)&x;

	if (*c == 1)
		return (1);
	else
		return (0);
}
