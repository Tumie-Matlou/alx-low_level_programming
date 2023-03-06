#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a memory area
 * @b: a constant byte
 * @n: number of bytes
 *
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s + i);
}
