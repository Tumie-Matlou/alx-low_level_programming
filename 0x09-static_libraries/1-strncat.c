#include "main.h"

/**
 * _strncat - concaenates two strings
 * @n: the number of bytes from src string
 * @src: the string to append
 * @dest: the string to append to
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;/* declare integers*/
	int j = 0;

	while (*(dest + i) != '\0')/*point to the last index of dest*/
	{
		i++;
	}
	while (j < n && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);/*put src index on corrspd dest index*/
		i++;
		j++;
	}
	*(dest + i) = '\0';

	return (dest);
}
