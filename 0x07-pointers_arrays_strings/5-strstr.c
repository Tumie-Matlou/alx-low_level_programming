#include "main.h"
#define NULL 0

/**
 * _strstr - locates substring
 * @haystack: string to search for substring in
 * @needle: substring to locate
 *
 * Return: pointer to beginning of located substring,
 * NULL if no match found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	/*iterate thru string*/
	while (haystack[i] != '\0' && haystack[i] != needle[j])
	{
		i++;/*move to next character if no match*/
	}
	if (haystack[i] == needle[j])/*if string match*/
	{
		return (&haystack[i]);/*return address of matching sring*/
	}
	else
		return (NULL);
}
