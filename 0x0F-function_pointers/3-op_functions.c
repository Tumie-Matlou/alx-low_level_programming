#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: integer one
 * @b: integer two
 * Return: addition of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: integer one
 * @b: integer two
 * Return: subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: integer one
 * @b: integer two
 * Return: multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: integer one
 * @b: integer two
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the modulus of two integers
 * @a: integer one
 * @b: integer two
 * Return: modulus of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
