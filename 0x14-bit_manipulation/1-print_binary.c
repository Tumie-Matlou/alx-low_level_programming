#include "main.h"

/**
 * print_binary - converts decimal to binary
 * @n: the decimal number
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, cpy_of_num = n;
	int length = 0;

	while (cpy_of_num > 0)
	{
		length++;
		cpy_of_num >>= 1;
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
