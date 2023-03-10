#include "main.h"

/**
 * _strspn - gets the length of a prefix substring matches in s
 * @s: the initial string
 * @accept: the prefix substring
 *
 * Return: the number of bytes in s that match bytes in accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j, matches;

matches = 0;
while (s[i] != '\0')/*iterate thru string*/
{
	for (j = 0; accept[j] != '\0'; j++)/*iterate thru prefix substring*/
	{
		if (s[i] == accept[j])/*check if two string match*/
		{
			matches++;
			break;
		}
		if (accept[j + 1] == '\0' && s[i] != accept[j])
		{
			return (matches);/*return if idx doesn't match*/
		}
	}
	i++;
}
return (matches);
}
