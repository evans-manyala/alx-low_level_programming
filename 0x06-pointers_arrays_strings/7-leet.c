#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * leet - Function that encodes a string into 1337.
 * @string: value being encoded into string.
 * Return: string value encoded.
 *
 */

char *leet(char *string)
{
	char *origin_table = "aAeEoOtTlL";
	char *replacements_table = "44370171";
	int x;

	for (x = 0; string[x] != '\0'; x++)
	{
		char *found = strchr(origin_table, string[x]);

		if (found != NULL)
		{
			string[x] = replacements_table[found - origin_table];
		}
	}

	return (string);
}
