#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of characters
 * Return: int
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
	{
		_putchar('_');
	}

	_putchar('\n');
}
