#include "main.h"

/**
 * rot13 - encodes string using rot13
 * @c: string to encode
 * Return: encoded string
 */

char *rot13(char *c)
{
	int a[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		     'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		     'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		     'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		     'W', 'X', 'Y', 'Z'};
	int b[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		     'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		     'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		     'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		     'J', 'K', 'L', 'M'};

	int i, j;

	for (j = 0; c[j] != '\0'; j++) /*loop through string*/
	{
		i = 0;
		while (a[i] != '\0' && c[j] != a[i]) /*loop through rot13 arr*/
			i++;

		if (c[j] == a[i]) /*if alpha matches, set to index in b arr*/
			c[j] = b[i];
	}
	return (c);
}
