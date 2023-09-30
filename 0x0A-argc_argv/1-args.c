#include <stdio.h>
/**
 * main - C program to print the number of arguments passed to it.
 * @argc: integer variable that stores the number of command-line
 * arguments passed by the user including the name of the program.
 * @argv: An array null-terminated strings representing command-line arguments
 * entered by the user of the program.
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
