#include "main.h"
/**
 * flip_bits - Function returns the number of bits you would
 * need to flip to get from one number to another
 * @n: Bit to be flipped
 * @m: Bit to to be flipped
 * Return: bit after being flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int pos = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		if (xor & 1)
			pos++;
		xor >>= 1;
	}
	return (pos);
}
