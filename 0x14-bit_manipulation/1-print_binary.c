#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints a binary representation of a number
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, copy_of_n = n;
	int length = 0;

	while (copy_of_n > 0)
	{
		length++;
		copy_of_n >>= 1;
	}
	length -= 1;

	if (length > 0)
		mask = mask << length;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
