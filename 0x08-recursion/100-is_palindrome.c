#include "main.h"

/**
 * comp - compare head and tail indices for match
 * @start: index starting from left of string
 * @end: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not
 */

int comp(char *start, char *end)
{

	if (start >= end)
		return (1);
	if (*start == *end)
		return (comp(start + 1, end - 1));

	return (0);
}

/**
 * _strlen - find length of string to access last index
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{

	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (comp(s, (s + len - 1)));
}
