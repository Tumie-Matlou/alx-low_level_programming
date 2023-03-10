#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: array of arrays (chess grid)
 */

void print_chessboard(char (*a)[8])
{
	int i, j; /*declare rows and columns*/

	i = 0;
	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
		i++;
	}
}
