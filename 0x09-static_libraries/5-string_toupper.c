#include "main.h"

/**
 * string_toupper - converts lowercase letters to uppercase
 * @p: letters to convert
 * Return: uppercase letters
 */

char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i]; i++)/*declare i as pointer's index, increment i*/

	{
		if (p[i] >= 97 && p[i] <= 122)/*if points to any lowercase in ascii*/
		{
			p[i] -= 32;/*convert to uppercase in ascii by - 32*/
		}
	}
	return (p);
}
