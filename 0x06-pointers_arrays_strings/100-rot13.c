#include "main.h"
/**
 * rot13- Prints a string using rot13.
 * @string: string to be printed.
 * Return: String output.
 */

char *rot13(char *string)
{
	char *pointer = string;

	while (*pointer != '\0')
	{
		if ((*pointer >= 'A' && *pointer <= 'Z') ||
				(*pointer >= 'a' && *pointer <= 'z'))
		{
			char b = (*pointer >= 'a') ? 'a' : 'A';
			*pointer = (*pointer - b + 13) % 26 + b;
		}

		pointer++;
	}

	return (string);
}
