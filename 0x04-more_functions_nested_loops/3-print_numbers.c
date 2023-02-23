#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 */

void print_numbers(void)
{
	int i;

	i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}

	_putchar('\n');
}
