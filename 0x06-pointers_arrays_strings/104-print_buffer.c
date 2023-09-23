#include <stdio.h>
#include <ctype.h>
/**
 * print_hex_line - Helper function to print a single line of hexadecimal.
 * @b: The buffer to print.
 * @start: The starting index for the line.
 * @end: The ending index for the line.
 */
void print_hex_line(char *b, int start, int end)
{
	int x;

	for (x = start; x < end; x++)
	{
		printf("%02x", (unsigned char)b[x]);
		if (x % 2 == 1)
		{
			printf(" ");
		}
	}
}
/**
 * print_char_line - Helper function to print a single line of characters.
 * @b: The buffer to print.
 * @start: The starting index for the line.
 * @end: The ending index for the line.
 */
void print_char_line(char *b, int start, int end)
{
	int x;

	for (x = start; x < end; x++)
	{
		if (isprint(b[x]))
		{
			printf("%c", b[x]);
		}
		else
		{
			printf(".");
		}
	}
}

/**
 * print_buffer - Prints the content of a buffer in a specified format.
 * @b: The buffer to be printed.
 * @size: The size (number of bytes) of the buffer.
 */
void print_buffer(char *b, int size)
{
	int x;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (x = 0; x < size; x += 10)
	{
		printf("%08x: ", x);
		print_hex_line(b, x, x + 10);
		printf(" ");
		print_char_line(b, x, x + 10);
		printf("\n");
	}
}
