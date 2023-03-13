#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a new string (a duplicate of str)
 * @str: string to duplicate
 *
 * Return: char
 * NULL if if str is NULL and insuffiecient memory allocated.
 */

char *_strdup(char *str)
{
	char *dup_str;
	int i = 0, j, len = 0;

	if (str == NULL)/*validate string*/
	{
		return (NULL);
	}
	while (*(str + i))/*get length of string*/
	{
		len++;
		i++;
	}
	len++;/*include null terminator of string*/
	dup_str = malloc(sizeof(char) * len);/*allocate memory*/
	i = 0;
	j = 0;
	while (j < len && i < len)
	{
		*(dup_str + j) = *(str + i);
		i++;
		j++;
	}
	return (dup_str);
}
