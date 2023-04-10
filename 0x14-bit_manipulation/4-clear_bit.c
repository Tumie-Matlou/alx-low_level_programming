#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets the bit at given index to 0;
 * @n: the number to retrive bit from
 * @index: the index
 * Return: 1 On success
 * -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;
	unsigned long int mask = 1;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);
	mask <<= index;
	*n = (*n & ~mask);
	return (1);
}
