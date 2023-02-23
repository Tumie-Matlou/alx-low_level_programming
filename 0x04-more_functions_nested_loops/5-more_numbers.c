#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14, followed by a new line.
 * it prints the above metioned numbers 10 times
 * Returns: int
 */

void more_numbers(void)
{
	char i;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
