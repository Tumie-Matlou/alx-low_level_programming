#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @c: the character to check
 * Return: 1 if uppercase, 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

	{
		return (1);
	}

	else if (c >= 'a' && c <= 'z')

	{
		return (0);
	}

	return (0);
}
