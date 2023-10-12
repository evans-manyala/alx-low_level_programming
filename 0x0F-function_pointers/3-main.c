#include "3-calc.h"
/**
 * main - program to execute the calculator function.
 * @argc: Argument counter.
 * @argv: Argument value.
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int (*c)(int, int);
	int y, z;

	if (argc != 4)
	{
		printf("Error: Too many arguments\n");
		exit(98);
	}

	c = get_op_func(argv[2]);

	if (c == NULL)
	{
		printf("Error: No value detected\n");
		exit(99);
	}

	y = atoi(argv[1]);
	z = atoi(argv[3]);

	printf("%d\n", c(y, z));

	return (0);
}
