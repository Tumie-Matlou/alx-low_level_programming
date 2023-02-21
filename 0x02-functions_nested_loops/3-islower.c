#include "main.h"

/**
 * _islower - checks if character is lowercase
 *@c: character to be checked
 * Return: 0 if not lowercase, 1 (success) if lowercase
 */
int _islower(int c)
{	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
else
{
	return (0);
}
_putchar('\n');
}
