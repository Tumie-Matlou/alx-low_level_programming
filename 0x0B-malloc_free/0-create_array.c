#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 * and initialises with a specific character
 * @size: size of array
 * @c: the specific character
 *
 * Return: char
 * NULL if size is zero or malloc fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;
	
	s = malloc(sizeof(unsigned int) * size - 1);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
