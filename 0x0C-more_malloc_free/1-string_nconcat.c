#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate two string, with n bytes in consideration
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: a concatenated string
 * NULL on failure of memory allocation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	/*Validate the string input*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*find length of strings*/
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j) && j < n)
		len2++, j++;
	len2++;/*count null term of s2*/

	/*allocate memory for new string*/
	new_string = malloc(sizeof(char) * (len1 + len2));

	/*validate the memory allocated*/
	if (new_string == NULL)
		return (NULL);

	/*Conactenate s1 and s2*/
	i = 0, j = 0;
	while (i < len1)
	{
		*(new_string + i) = *(s1 + i);
		i++;
	}
	while (j < len2)
	{
		*(new_string + i) = *(s2 + j);
		i++, j++;
	}
	return (new_string);
}
