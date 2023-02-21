#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: integer to compute
 * Return: 0 (success)
 */
int _abs(int i)
{	int j;
	if (i < 0)
	{	j = ((i * -1));
		_putchar(j);
	}
	else if (i >= 0)
	{	_putchar(i);
	}
}

