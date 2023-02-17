#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the alphabet in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{	char alph = 'a';

	for (alph = 'a'; alph <= 'z'; alph++)
	{	putchar(alph);
	}
	putchar('\n');
	return (0);
}

