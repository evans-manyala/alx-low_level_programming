#include <stdio.h>
/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int num, prime_factor;

	num = 612852475143;

	for (prime_factor = 2; prime_factor <= num; prime_factor++)
	{
		if (num % prime_factor == 0)
		{
			num = num / prime_factor;
			prime_factor--;
		}
	}

	printf("%ld\n", prime_factor);

	return (0);
}
