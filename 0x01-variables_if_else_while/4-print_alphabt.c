#include <stdio.h>

/**
 * main - Entry point
 * program that prints the alphabet in lowercase, followed by a new line
 * all letters except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if ((al != 'q') && (al != 'e'))
		{
			putchar(al);
		}
		al++;
	}
	putchar('\n');
	return (0);
}
