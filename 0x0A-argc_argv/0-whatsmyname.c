#include <stdio.h>

/**
 * main - C program to prints a name followed by a new line.
 * @argc: integer variable that stores the number of command-line
 * arguments passed by the user including the name of the program.
 * @argv: An array null-terminated strings representing command-line arguments
 * entered by the user of the program.
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
