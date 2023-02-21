#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to print the last digit of
 * Return: 0 (success)
 */
int print_last_digit(int n)
{
if (n < 0)
{	n *= -1;
}
_putchar('0' + (n % 10));
return (0);
}
