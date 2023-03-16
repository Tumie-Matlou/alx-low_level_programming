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
	int i, val = (max - min + 1);
	int *arr;

	/*Validate argument inputs*/
	if (min > max)
		return (NULL);

	/*Allocate memory*/
	arr = malloc(sizeof(int) * val);

	/*Validate allocated memory*/
	if (arr == NULL)
		return (NULL);

	/*iterate through array*/
	for (i = 0; i < val; i++)
		*(arr + i) = min++;
	return (arr);
}
