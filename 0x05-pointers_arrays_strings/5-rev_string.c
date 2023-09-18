#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - Prints a string in reverse.
 * @s: string to be printed in reverse.
 * Return: void
 */

void rev_string(char *s)
{
	int length = strlen(s), i, j;
	char tmp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
