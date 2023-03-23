#include <stdlib.h>
#include <stdio.h> /*printf*/
#include <stdarg.h>/*variadic functions*/
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters of a function
 * @n: the number of parameters
 * @...: the aparameters
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int Tsum = 0;
	va_list args;

	va_start(args, n);

	if (n <= 0)/*validate number of parameters*/
		return (0);

	for (i = 0; i < n; i++)
	{
		int val = va_arg(args, int);

		Tsum += val;
	}

	va_end(args);
	return (Tsum);
}
