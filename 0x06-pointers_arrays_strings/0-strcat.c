#include "main.h"

/**
 * _strcat - concatenates src string into dest string
 * @src: the source string
 * @dest: the destination of source string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
	{
		i++;
	}

	while (*(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';

	return (dest);
}
