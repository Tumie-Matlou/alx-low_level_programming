#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separating characters to separate the numbers
 * @n: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n <= 0)
		return;
	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		int val = va_arg(args, int);

		printf("%d", val);
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
