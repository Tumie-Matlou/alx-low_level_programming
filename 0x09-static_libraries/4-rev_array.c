#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: the array to reverse
 * @n: number of elements f array
 */

void reverse_array(int *a, int n)
{
	int i = 0; /* declare beginning of array*/
	int j = (n - 1);/* declare end of array*/
	int t;/*initialize integer*/

	while (i < j)/*as long as beginning is less than end*/
	{
		t = *(a + i);/*declare int t as pointer to beginning*/
		*(a + i) = *(a + j);/*declare beginning to equal end*/
		*(a + j) = t;/*declare end to equal int t*/
		i++;/*increment beginning*/
		j--;/*decrement end*/
	}
}
