#include "main.h"

/**
 * flip_bits - flips bits to make a number look like the other
 * @n: the number to flip
 * @m: the number to flip it to
 * Return: number of flips it took
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result != 0)
	{
		if (xor_result & 1)
			flips++;
		xor_result >>= 1;
	}
	return (flips);
}
