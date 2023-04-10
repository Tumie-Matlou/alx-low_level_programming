#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets the bit at given index to 0;
 * @n: the number to retive bit from
 * @index: the index
 * Return: manipulated number
 * -1 if error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);
	*n |= ((unsigned long int)1 << index);
	return (*n);
}
