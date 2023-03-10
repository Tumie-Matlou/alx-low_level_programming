#include "main.h"

/**
 * _isalpha - checks if character is alphabetic
 *@c: character to be checked
 * Return: 1 (success) if alphabetic, 0 is returned when otherwise.
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
_putchar('\n');
}
