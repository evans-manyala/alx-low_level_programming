#include "main.h"
#include <string.h>
/**
 * rot13- Prints a string using rot13.
 * @a: string to be printed.
 * Return: String output.
 */
char *rot13(char *a)
{
	int x1, y, k;
	char aToz[] = "AaZz";
	char r_robin[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x1 = 0; *(a + x1) != '\0'; x1++)
		for (y = 0; y < 2; y++)
		{
			if (*(a + x1) >= aToz[y] && *(a + x1) <= aToz[y + 2])
			{
				k = (*(a + x1) - 65 - (y * 32));
				*(a + x1) = (r_robin[k] + (y * 32));
			}
		}
	return (a);
}
