#include "main.h"
#define NULL 0

/**
 * _strchr - locates char in string
 * @s: string to check
 * @c: character to locate
 *
 * Return: pointers to first occurence of c in s
 * NULL if character not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)/*iterate thru string, search match*/
	{
		i++;/*move to next char if not c or end of s*/
	}
	if (s[i] == c)/*if string matches char*/
		return (&s[i]);/*return address of c*/
	else
		return (NULL);
}
