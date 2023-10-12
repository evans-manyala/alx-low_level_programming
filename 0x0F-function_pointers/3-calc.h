#ifndef _3_CALC_H_
#define _3_CALC_H_

#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include <string.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*c)(int a, int b);
} op_t;

int op_sum(int a, int b);
int op_minus(int a, int b);
int op_product(int a, int b);
int op_division(int a, int b);
int op_modulo(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
