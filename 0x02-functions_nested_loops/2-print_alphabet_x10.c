#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: 0 (success)
 */
void print_alphabet_x10(void) /* print_alphabet_x10 prints the alphabet */
{	int i = 0;
	while (i < 10)
	{	char alpha;
		alpha = 'a';
		while (alpha <= 'z')
		{	_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
