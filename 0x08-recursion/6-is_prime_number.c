#include "main.h"
/**
 * is_prime_number - Function calculates a prime number.
 * @n: number being tested as prime number.
 * @div: divisor to test whether n is prime number or not
 * Return: 1 if the number is prime number, otherwise 0.
 */

int is_prime_helper_function(int n, int div);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper_function(n, 3));
	}
}
/**
 * is_prime_helper_function - Function calculates the prime number.
 * @n: number being tested.
 * @div: divisor to test if n is prime number or not.
 * Return: 1 if the number is prime number, otherwise 0.
 */

int is_prime_helper_function(int n, int div)
{
	if (div * div > n)
	{
		return (1);
	}

	if (n % div == 0)
	{
		return (0);
	}

	return (is_prime_helper_function(n, div + 2));
}
