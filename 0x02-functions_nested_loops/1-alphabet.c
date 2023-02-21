#include "main.h"

/**
 * main - Entry point
 * print_alphabet: prints the alphabet in lowercase
 * Return: 0 (success)
 */
void print_alphabet(void)
{	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{	_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
