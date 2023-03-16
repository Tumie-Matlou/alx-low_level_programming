#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of ints
 * @min: minimum value of array
 * @max: maximum value of array
 *
 * Return: a pointer to array
 * NULL if malloc fails or min is greater than max.
 */

int *array_range(int min, int max)
{
	int i, val;
	int *arr;

	/*Validate argument inputs*/
	if (min > max)
		return (NULL);

	/*Allocate memory*/
	arr = malloc(sizeof(int) * (max + 1));

	/*Validate allocated memory*/
	if (arr == NULL)
		return (NULL);

	/*iterate through array*/
	val = min, i = 0;
	while (i < max + 1 && val < max + 1)
	{
		*(arr + i) = val;
		i++;
		val++;
	}
	return (arr);
}
