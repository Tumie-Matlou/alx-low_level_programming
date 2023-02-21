#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: 0 (success)
 */
void print_alphabet(void) /* print_alphabet prints the alphabet in lowercase */
{	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{	_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
