#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: string to be printed in reverse.
 *Return: void
 */

void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
