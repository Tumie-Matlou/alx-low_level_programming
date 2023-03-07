#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of
 * a square matrix of integers
 * @a: array of arrays
 * @size: the size of array
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0; /*sum of first diagonal*/
	int sum2 = 0; /*sum of second diagonal*/
	int r, i; /*initialise row(r) and index(i)*/

	for (r = 0; r < size; r++)
	{
		i = (r * size) + r;
		sum1 += a[i];
	}

	for (r = 1; r <= size; r++)
	{
		i = (r * size) - r;
		sum2 += a[i];
	}

	printf("%d, %d\n", sum1, sum2);
}
