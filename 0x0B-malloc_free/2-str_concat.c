#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int len1 = 0, len2 = 0;
	char *new_string;/*initialize npointer to new string*/

	if (s1 == NULL || s2 == NULL)
		return (" ");
	while (*(s1 + i) || *(s2 + j))/*find the length of the strings*/
	{
		len1++, i++;
		len2++, j++;
	}
	len1++, len2++;/*include null terminator of s1 and s2*/
	/*allocate memory of new string*/
	new_string = malloc(sizeof(char) * (len1 + len2));
	if (new_string == NULL)/*Validate memory*/
		return (NULL);
	i = 0, j = 0;
	while (i < len1 && s1[i] != '\0')/*dupicate first string*/
	{
		*(new_string + i) = *(s1 + i);
		i++;
	}
	while (s2[j] != '\0' && j < len2)/*duplicate s2 at end of s1*/
	{
		*(new_string + i) = *(s2 + j);
		i++, j++;
	}
	return (new_string);
}
