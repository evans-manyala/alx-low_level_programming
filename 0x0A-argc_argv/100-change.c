#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: integer variable that stores the number of command-line
 * arguments passed by the user including the name of the program.
 * @argv: An array null-terminated strings representing command-line arguments
 * entered by the user of the program.
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("Error\n");
		return (1);
	}

	do {
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coins += 1;
	} while (cents > 0);

	printf("%d\n", coins);

	return (0);
}
