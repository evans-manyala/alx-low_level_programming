#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function multiplies two numbers and prints the results.
 * @argc: integer variable that stores the number of command-line
 * arguments passed by the user including the name of the program.
 * @argv: An array null-terminated strings representing command-line arguments
 * entered by the user of the program.
 * Return: 0 if successful, otherwise 1.
 */
int main(int argc, char *argv[])
{
	int product, x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	product = x * y;

	printf("%d\n", product);

	return (0);
}
