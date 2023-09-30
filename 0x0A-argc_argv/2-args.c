#include <stdio.h>
/**
 * main - Function prints all arguments it receives.
 * @argc: integer variable that stores the number of command-line
 * arguments passed by the user including the name of the program.
 * @argv: An array null-terminated strings representing command-line arguments
 * entered by the user of the program.
 * Return: 0 If successful.
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
