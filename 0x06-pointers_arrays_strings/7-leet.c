#include "main.h"

/**
 * leet - encodes string into leet writing style
 * @p: string to encode
 * Return: leet string
 */

char *leet(char *p)
{
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	for (i = 0; p[i] != '\0'; i++)/*iterate through the string*/
	{
		for (j = 0; a[j] != '\0'; j++)/*iterate through alphabet array*/
		{
			if (p[i] == a[j])/*where char of string is same as array a*/
			{
				p[i] = b[j];/*replace it with correspnd array b val*/
			}
		}
	}
	return (p);
}
