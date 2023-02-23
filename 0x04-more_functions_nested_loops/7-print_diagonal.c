#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times to print line
 * Return: int
 */

void print_diagonal(int n)
{
	int draw;
	int space;

	for (draw = 1; draw <= n; draw++)
	{
		for (space = 1; space < draw; space++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
	}
	if (n < 1)
	{
		_putchar('\n');
	}
}
