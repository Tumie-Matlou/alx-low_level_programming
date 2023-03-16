#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory needed
 *
 * Return: a pointer to memory allocated
 * an exit value of 98 On failure.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);/*allocate memory of size b*/
	if (p == NULL)/*validate memory allocated*/
		exit(98);
	return (p);
}
