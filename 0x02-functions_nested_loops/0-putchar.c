#include "main.h"
#include <stdio.h>
/**
 * Main - Program starting block
 * Description: This script prints _putchar followed by a new line
 * Return : 0 (Success)
 */
int main(void)
{
	char var[8] = "_putchar";
	int x;

	for (x = 0; x < 8 ; x++)
	{
		_putchar(var[x]);
	}
	_putchar('\n');
	return (0);
}
