#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers.
 * Return: Success (0).
 *
 */

int main(void)
{
	long long f1 = 0, f2 = 1, n, i;

	for (i = 0; i < 98; i++)
	{
		n = f1 + f2;

		if (n < 0)
		{
			break;
		}

		printf("%d, ", n);
		f1 = f2;
		f2 = n;
	}

	printf("\n");
	return (0);
}
