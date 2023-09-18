#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - Prints a charactet followed by a new line.
 * @str: character of a string to be printed.
 *Return: void
 */

void puts2(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i <= length; i++)
	{
		putchar(str[i]);
		putchar('\n');
	}
}
