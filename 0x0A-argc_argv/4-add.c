#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stddef.h>
/**
 * main - Function add postive numbers only.
 * @argc: integer variable that stores the number of command-line
 * arguments passed by the user including the name of the program.
 * @argv: An array null-terminated strings representing command-line arguments
 * entered by the user of the program.
 * Return: 0 if successful, others 1
 */
int main(int argc, char *argv[])
{
	int sum, is_num, x;
	size_t y;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		is_num = 1;

		for (y = 0; y < strlen(argv[x]); y++)
		{
			if (!isdigit(argv[x][y]))
			{
				is_num = 0;
				break;
			}
		}

		if (is_num)
		{
			sum += atoi(argv[x]);
		}

		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
