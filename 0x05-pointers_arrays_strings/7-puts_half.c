#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - This function prints half of a string, followed by a new line.
 * @str: character of a string to be printed.
 *Return: void
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int i, n;

	n = length / 2;

	if (length % 2 != 0)
	{
		n += 1;
	}

	for (i = n; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
