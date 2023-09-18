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
	int i = 0;

	if (str == NULL)
	{
		return;
	}

	while (str[i] != '\n')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}
