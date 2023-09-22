#include "main.h"
#include <string.h>
/**
 * infinite_add - Function that adds two numbers.
 * @n1: First string.
 * @n2: Second string.
 * @r: The result buffer.
 * @size_r: The size of the result buffer.
 * Return: A pointer to the result buffe
 * the buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry_over, x, y, z = 0, len1, len2, num1, num2, result;
	int start, stop;
	char buffer;

	len1 = strlen(n1);
	len2 = strlen(n2);
	x = len1 - 1;
	y = len2 - 1;
	z = 0;

	memset(r, '0', size_r);
	r[size_r - 1] = '\0';

	while (x >= 0 || y >= 0 || carry_over > 0)
	{
		if (z >= size_r - 1)
		{
			return (0);
		}

		num1 = (x >= 0) ? n1[x] - '0' : 0;
		num2 = (y >= 0) ? n2[y] - '0' : 0;
		result = num1 + num2 + carry_over;
		carry_over = result / 10;
		r[z] = (result % 10) + '0';
		x--;
		y--;
		z++;
	}

	start = 0;
	stop = z - 1;

	while (start < stop)
	{
		buffer = r[start];
		r[start] = r[stop];
		r[stop] = buffer;
		start++;
		stop--;
	}

	return (r);
}
