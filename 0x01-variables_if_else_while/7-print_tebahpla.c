#include <stdio.h>

/**
 * main - Entry point
 * a program that prints the alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{	char ahpla = 'z';

	for (ahpla = 'z'; ahpla >= 'a'; ahpla--)
	{	putchar(ahpla);
	}
	putchar('\n');
	return (0);
}
