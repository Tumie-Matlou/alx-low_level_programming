#include <stdlib.h>
#include "main.h"

/**
 * get_bit - printts the bit at given index
 * @n: the number to retive bit from
 * @index: the index
 * Return: Value of bit
 * -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);
	bit = ((n >> index) & 1);
	return (bit);
}
