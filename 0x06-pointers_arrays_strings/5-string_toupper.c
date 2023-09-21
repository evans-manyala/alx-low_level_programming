#include "main.h"
/**
 * string_toupper -Converts lowercase strings to uppercase strings.
 * @string: string value being converted.
 * Return: string value after conversion.
 */
char *string_toupper(char *string)
{
	int x;

	for (x = 0; string[x] != '\0'; x++)
	{
		if (string[x] >= 'a' && string[x] <= 'z')
		{
			string[x] -= 32;
		}
	}

	return (string);
}

