#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory using an array, using malloc)
 * @nmemb: number of elements
 * @size: size of bytes per element
 * Return: pointer to allocated memory
 * Null if malloc fails, or when nmemb or size are 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *arr;

	/*Validate argument input*/
	if (nmemb == '0' || size == '0')
		return (NULL);

	/*Allocate memory*/
	arr = malloc(size * nmemb);

	/*Validate allocated memory*/
	if (arr == NULL)
		return (NULL);

	/*setting value of elements to 0*/
	i = 0;
	if (arr != NULL && i < nmemb)
	{
		*(arr + i) = 0;
		i++;
	}

	/*Value of address*/
	i = 0;
	while (i < nmemb && *(arr + i))
	{
		i++;
	}
	return ((void *)arr);
}
