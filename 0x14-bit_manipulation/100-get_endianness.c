#include "main.h"

/**
 * get_endianness - checks if data is store in big or little endianness
 * big endian stores most significant byte at the lowest memory address
 * little endian stores most significant byte at the highest memory address
 * most significant by is the one closest to the 0x in hex
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int number = 0x12016474;/*4 byte number*/
	unsigned char *ptr = (unsigned char *)&number;/*point to number byte by byte*/

	if (*ptr == 0x12)
		return (0);
	else if (*ptr == 0x74)
		return (1);
	return (0);
}
