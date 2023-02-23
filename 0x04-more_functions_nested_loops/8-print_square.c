#include "main.h"

/**
* print_square - print square of any character
* @size: size of square
*
* Return: void
*/

void print_square(int size)
{
	if ((size != 0) && (size > 0))
	{
		int row, col;

		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
