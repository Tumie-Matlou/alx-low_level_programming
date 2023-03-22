#include "function_pointers.h"

/**
 * int_index -  returns the index of the first element for which
 * the cmp function does not return 0
 * @array: the array to search through
 * @size: the number of elements
 * @cmp: a pointer to a function
 * Return: the index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		cmp(array[i]);
		if (cmp(array[i]) == 0)
			i++;
		else
			return(i);
	}
	if (i == size)
		return (-1);
	return (0);
}
