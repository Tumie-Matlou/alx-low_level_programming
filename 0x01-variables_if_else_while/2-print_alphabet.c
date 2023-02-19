#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the alphabet in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{	char alph = 'a'; /* initialising a char named 'alph' to a*/

	for (alph = 'a'; alph <= 'z'; alph++) /* alph is letter a throughout the alphabet to z, increment by a letter */
	{	putchar(alph);
	}
	putchar('\n');
	return (0);
}

