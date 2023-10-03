#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - Function concatenates two strings.
 * @s1: Represents Frist string.
 * @s2: Reprsents Second string.
 * Return: NULL if the string length is 0 or empty,
 * otherwise the value of the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	size_t str_len1, str_len2, sum_strlen;
	char *newstr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	str_len1 = strlen(s1);
	str_len2 = strlen(s2);
	sum_strlen = str_len1 + str_len2 + 1;

	newstr = (char *)malloc(sum_strlen);

	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		memcpy(newstr, s1, str_len1);
		memcpy(newstr + str_len1, s2, str_len2);
	}

	newstr[sum_strlen - 1] = '\0';
	return (newstr);
}
