#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - Prints a string in reverse.
 * @s: string to be printed in reverse.
 *Return: void
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
}
