#include "main.h"
#include <string.h>
/**
 * rot13- Prints a string using rot13.
 * @string: string to be printed.
 * Return: String output.
 */

char *rot13(char *string)
{
	int x, y;
	y = strlen(string);

	for (x = 0; x < y; x++)
	{
		if ((string[x] >= 'a' && string[x] <= 'z') ||
				(string[x] >= 'A' && string[x] <= 'Z'))
		{
			string[x] += 13;

			if (string[x] > 'z')
			{
				string[x] -= 26;
			}
		}
	}
	return (string);
}
