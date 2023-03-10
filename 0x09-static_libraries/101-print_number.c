#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */

void print_number(int n)
{
	unsigned int tens, digits, pos = n;
	double tbeg = 1;

	if (n == 0)
	{
		_putchar ('0');
	}
	else
	{
		if (n < 0)
		{
			pos = n * -1;
			_putchar('-');
		}

		while (tbeg <= pos)
		{
			tbeg *= 10;
		}
		tens = tbeg / 10;

		while (tens >= 1)
		{
			digits = pos / tens;
			_putchar('0' + digits);
			pos = (pos - (tens * digits));
			tens /= 10;
		}
	}
}
