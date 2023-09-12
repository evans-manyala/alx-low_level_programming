#include "main.h"
#include <stdio.h>
/**
 * main - Program starting block.
 * Description: This script prints _putchar followed by a new line.
 * Return: On success (0), returns character written.
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
