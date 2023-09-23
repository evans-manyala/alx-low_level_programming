#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer in a specified format.
 * @b: The buffer to be printed.
 * @size: The size (number of bytes) of the buffer.
 */
void print_buffer(char *b, int size)
{
	int offset = 0, x, y, z;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (offset < size)
	{
		y = (size - offset < 10) ? (size - offset) : 10;
		printf("%08x: ", offset);
		for (x = 0; x < 10; x++)
		{
			if (x < y)
				printf("%02x", *(b + offset + x));
			else
				printf("  ");
			if (x % 2 == 1)
			{
				printf(" ");
			}
		}

			for (x = 0; x < y; x++)
			{
				z = *(b + offset + x);
				if (z < 32 || z > 132)
				{
					z = '.';
				}
				printf("%c", z);
			}
			printf("\n");
			offset += 10;
	}
}
