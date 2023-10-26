#include "main.h"
/**
 * binary_to_uint - Function converts binary to unsigned int
 * @b: Pointer to string characters 1 and 0
 * Return: Converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int r = 0;

	if (b == NULL)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		x++;
	}

	return (r != (unsigned int)(b[x] - '0') << x);
}
