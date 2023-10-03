#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - Function returns words from a string.
 * @str: string pointer to which words will be
 * returned from.
 * Return: NULL if str is NULL or Empty, otherwise returns
 * the word itself.
 */
char **strtow(char *str)
{
	size_t  x, start, stop, num;
	char **word;

	if (str == NULL || strcmp(str, "") == 0)
	{
		return (NULL);
	}
	num = 1;

	for (x = 0; x < strlen(str); x++)
	{
		if (str[x] == ' ')
		{
			num++;
		}
	}
	word = malloc((num + 1) * sizeof(char *));

	if (word == NULL)
	{
		return (NULL);
	}
	start = 0;
	stop = 0;

	for (x = 0; x < num; x++)
	{
		while (stop < strlen(str) && str[stop] != ' ')
		{
			stop++;
		}
		word[x] = strndup(str + start, stop - start);
		start = stop + 1;
		stop += 1;
	}
	word[num] = NULL;
	return (word);
}
