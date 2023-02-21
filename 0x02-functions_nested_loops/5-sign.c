#include "main.h"

/**
 * print_sign - it prints the sign of a number
 * @n: the number to check
 * Return: 0 (success)
 */
int print_sign(int n)
{
if (n > 1)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
