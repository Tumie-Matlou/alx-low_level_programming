#include "main.h"

/**
 * flip_bits - flips bits to make one number the other
 * @n: the number to flip
 * @m: the number it should be
 * Return: number of flips it took
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xor = n ^ m;

	while (xor != 0)
	{
		if (xor & 1)
		{
			flips++;
		}
		xor >>= 1;
	}
	return (flips);
}
