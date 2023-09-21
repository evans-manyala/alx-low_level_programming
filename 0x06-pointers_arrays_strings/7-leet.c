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
	int x, y;

	for (x = 0; string[x] != '\0'; x++)
	{
		for (y = 0; origin_table[x] != '\0'; y++)
		{
			if (string[x] == origin_table[y])
			{
				string[x] = replacements_table[y];
				break;
			}
		}
	}

	return (string);
}
