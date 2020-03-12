#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds a and b integers
 * @a: integer to sum
 * @b: integer to sum
 * Return: Result of the sum - integer
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - substraction of a minus b
 * @a: integer to sum
 * @b: integer to sum
 * Return: Result of the sum - integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Multiplies a times b
 * @a: integer to multiply
 * @b: integer to multiply
 * Return: Product of a times b - integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides a into b
 * @a: dividend
 * @b: dividing
 * Return: resultd of a divided into b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Finds the remainder of a divided b
 * @a: dividend
 * @b: dividing
 * Return: Module of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
