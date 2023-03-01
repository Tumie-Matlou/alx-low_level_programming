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
	char temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
