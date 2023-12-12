#include "main.h"
/**
 * _strspn - Function finds the first occurrence
 * of a character in string1 that is not contained
 * in the set of characters that is specified by string2
 * @s: Pointer to the character being checked.
 * @accept: Pointer to the Character being after being found.
 * Return: Length of string string 1.
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, found = 0;

	while (*s)
	{
		for (char *p = accept; *p; p++)
		{
			if (*s == *p)
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
