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
	int i = 0, j, x;

	if (needle[0] == '\0')/*first element is null, pointer to haystack*/
	{
		return (haystack);
	}
	/*iterate thru haystack*/
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			x = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])/*check for match*/
					x++, j++;
				else
					break;
			} /* if matched to end, return haystack */
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL); /* No match */
}
