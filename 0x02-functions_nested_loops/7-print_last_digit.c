#include "main.h"
/**
 * print_last_digit - function that compute last digit of a number
 *@n: number to be checked
 *
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	int rightmost_digit = n % 10;

	_putchar(rightmost_digit);
	return (rightmost_digit);
}
