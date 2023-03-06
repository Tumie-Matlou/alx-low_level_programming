#include "main.h"
#define NULL 0

/**
 * _strpbrk - searches a string for any bytes of a set of bytes
 * locates first occur in th e string s of any bytes
 * in the string accept.
 * @s: string to search
 * @accept: string to match
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')/*iterate thru string*/
	{
		for (j = 0; accept[j] != '\0'; j++)/*iterate thru string*/
		{
			if (s[i] == accept[j])/*stop at first occurence of char*/
			{
				/*return the address offirst occurence of char*/
				return (&s[i]);
			}
		}
		i++;/*move tonext character*/
	}
	return (NULL);/*return NULL if no match in s*/
}
