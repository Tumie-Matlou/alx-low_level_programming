#include "main.h"

/**
 * set_bit - sets a bit of a number at a given index to 1
 * @n: the number
 * @index: the index
 * Return: 1 on success
 * -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int limit;
	unsigned long int mask = 1;

	limit = (sizeof(unsigned long int) * 8);
	if (index > limit)
		return (-1);/*out of bounds*/
	mask <<= index;
	*n = (*n | mask);
	return (1);
}
