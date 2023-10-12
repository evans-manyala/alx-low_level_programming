#include "3-calc.h"

/**
 * op_sum Function adds two integers.
 * op_minus - Function subatracts two integers.
 * op_division - Function divides to integers.
 * op_product - Function multiplies two integers.
 * op_modulo - Function gets remainder of a division
 * process between two integers.
 * @x: represents the 1st integer.
 * @y: represents the 2nd integer.
 */

int op_sum(int x, int y) /*Function adds two integers*/
{
	return (x + y); /*Return value*/
}
int op_minus(int x, int y)
{
	return (x - y);
}
int op_product(int x, int y)
{
	return (x * y);
}
int op_division(int x, int y)
{
	if (y == 0)
	{
		printf("Error: division by zero not allowed\n");
		exit(100);
	}
	else
	{
		return (x / y);
	}
}
int op_modulo(int x, int y)
{
	if (y == 0)
	{
		printf("Error, division by zero is not allowed\n");
		exit(100);
	}
	else
	{
		return (x % y);
	}
}
