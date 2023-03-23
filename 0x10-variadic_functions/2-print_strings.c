#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string, followed by a new line
 * @separator: separates strings
 * @n: number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n <= 0)
		return;
	for (i = 1; i <= n; i++)
	{
		char *string = va_arg(args, char *);

		if (string == NULL)
			printf("(nil)");
		printf("%s", string);
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
