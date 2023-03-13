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
	/*typecaste void malloc pointer to char * pointer*/
	char *s = (char *)malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)/*return null if size is 0 or malloc fail*/
	{
		return (NULL);
	}
	i = 0;
	while (i < size)/*iterate thru string, replace with c*/
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';/*end of new string*/
	return (s);
}
