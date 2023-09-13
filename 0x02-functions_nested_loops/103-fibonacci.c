#include <stdio.h>
/**
 * main - This calculates sum of even numbers ina fibonacci series
 * not exceeding 4 million.
 * Return: Success (0)
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, n, sum = 0;

	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
		{
			sum = sum + fib2;
		}
		n = fib1 + fib2;

		fib1 = fib2;

		fib2 = n;
	}

	printf("%lu\n", sum);

	return (0);
}
