#include "main.h"
#include <ctype.h>
/**
 * cap_string - Function capitalizes every word.
 * @string: word being capitalized
 * Return: String after being capitalized.
 *
 */
char *cap_string(char *string)
{
	int x = 0;
	int caps_next = 1;

	while (string[x] != '\0')
	{

	if (caps_next && string[x] != ' ' && string[x] != '\t' &&
	string[x] != '\n' && string[x] != ',' && string[x] != ';' &&
	string[x] != '.' && string[x] != '!' && string[x] != '?' &&
	string[x] != '"' && string[x] != '(' && string[x] != ')' &&
	string[x] != '{' && string[x] != '}')
	{
	string[x] = toupper(string[x]);
	caps_next = 0;
	}

	else if (string[x] == ' ' || string[x] == '\t' ||
	string[x] == '\n' || string[x] == ',' || string[x] == ';' ||
	string[x] == '.' || string[x] == '!' || string[x] == '?' ||
	string[x] == '"' || string[x] == '(' || string[x] == ')' ||
	string[x] == '{' || string[x] == '}')
	{

	caps_next = 1;
	}

	x++;
	}
	return (string);
}
