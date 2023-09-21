#include "main.h"
/**
 * leet - Function that encodes a string into 1337.
 * @string: value being encoded into string.
 * Return: string value encoded.
 *
 */

char *leet(char *string)
{
	int x;

	for (x = 0; string[x] != '\0'; x++)
	{
	if (string[x] == 'a' || string[x] == 'A' ||
			string[x] == 'e' || string[x] == 'E' ||
			string[x] == 'o' || string[x] == 'O' ||
			string[x] == 't' || string[x] == 'T' ||
			string[x] == 'l' || string[x] == 'L')
	{
		string[x] += 4;
	}
	}
	return (string);
}
