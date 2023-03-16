#include <unistd.h>

/**
 * _putchar - prints character c into the stdout
 * @c: character to print
 *
 * Return: 1 On success.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
