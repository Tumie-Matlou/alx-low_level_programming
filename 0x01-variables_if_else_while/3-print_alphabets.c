#include <stdio.h>

/**
 * main - Entry point
 * program that prints the alphabet in lowercase and then in uppercase
 * Return: 0 (success)
 */
int main(void)
{	char al = 'a', AL = 'A';

	for (al = 'a'; al <= 'z'; al++)
	{	putchar(al);
	}
	for (AL = 'A'; AL <= 'Z'; AL++)
	{	putchar(AL);
	}
	putchar('\n');
	return (0);
}

