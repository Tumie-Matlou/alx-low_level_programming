#include "main.h"

/**
 * factorial - calculates the factorial of any given number
 * @n: the number
 *
 * Return: factorial of number on success
 * -1 when number is less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
