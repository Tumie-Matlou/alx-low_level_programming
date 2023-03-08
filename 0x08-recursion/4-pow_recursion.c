#include "main.h"

/**
 * _pow_recursion - returns the value of x to the power y
 * @x: base
 * @y: power
 *
 * Return: returns value on success
 * -1 when y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
