#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: String 1 to be compared with String 2.
 * @s2: String 2 to be compared with String 1.
 * Return: When successful 0 otherwise 1.
 *
 */

int _strcmp(char *s1, char *s2)
{
	int x1 = 0;

	while (s1[x1] != '\0' && s2[x1] != '\0')
	{
		if (s1[x1] < s2[x1])
		{
			return (-1);
		}

		else if (s1[x1] > s2[x1])
		{
			return (1);
		}
		x1++;
	}

	if (s1[x1] == '\0' && s2[x1] != '\0')
	{
		return (-1);
	}
	else if (s1[x1] != '\0' && s2[x1] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
