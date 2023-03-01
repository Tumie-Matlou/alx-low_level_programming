#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: the array to reverse
 * @n: number of elements f array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = (n - 1);
	int t;

	while (i < j)
	{
		t = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = t;
		i++;
		j--;
	}
}
