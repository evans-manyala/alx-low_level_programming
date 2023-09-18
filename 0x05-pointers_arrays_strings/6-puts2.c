#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - Prints a every other character of a string, starting with the
 * first character, followed by a new line.
 * @str: character of a string to be printed.
 *Return: void
 */

void puts2(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
		if (i % 2 != 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
