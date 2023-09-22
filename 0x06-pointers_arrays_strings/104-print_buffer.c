#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints the content of a buffer in a specified format.
 * @b: The buffer to be printed.
 * @size: The size (number of bytes) of the buffer.
 */

void print_buffer(char *b, int size) 
{
	int x, y;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (x = 0; x < size; x += 10)
	{
		printf("%08x: ");

		for (y = 0; y < 10; y++)
		{
			if (x + y < size)
			{
				printf("%02x", (unsigned char)b[x + y]);
			}
			else
			{
				printf("  ");
			}
			if (y % 2 == 1)
			{
				printf(" ");
			}
		}

		for (y = 0; y < 10; y++)
		{
			if (x + y < size)
			{
				if (isprint(b[x + y]))
				{
					printf("%c", b[x + y]);
				}
				else
				{
					printf(".");
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
