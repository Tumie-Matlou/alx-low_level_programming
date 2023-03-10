#include "main.h"

/**
 * _strncpy - copies a string into another
 * @src: the string to copy
 * @dest: the sting to copy into
 * @n: the number of bytes used
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
