#include "main.h"

/**
 * get_bit - prints the bit at a given index of a number
 * @n: the number
 * @index: the index
 * Return: value of bit
 * -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int limit;

	limit = (sizeof(unsigned long int) * 8);
	if (index > limit)
		return (-1);/*out of bounds*/
	/*locate bit at index spaces, mask it by & 1 to print it*/
	bit = ((n >> index) & 1);
	return (bit);
}
