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
	void *ptr;
	unsigned int i; /* match unsigned arguments */

	if (nmemb <= 0 || size <= 0) /* validate input */
		return (NULL);

	/* allocate memory and check if error */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* set allocated memory values to 0 */
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0; /* type cast assigning values*/

	return (ptr);
}
