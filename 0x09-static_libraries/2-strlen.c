#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string length
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
