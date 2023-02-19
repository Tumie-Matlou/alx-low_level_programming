#include <stdio.h>

/**
 * main - Entry point
 * program that prints the alphabet in lowercase and then in uppercase
 * Return: 0 (success)
 */
int main(void)
{	char al = 'a', AL = 'A'; /* initialising lowercase alphabets(al) to a and uppercase alphabets(AL) to A */

	for (al = 'a'; al <= 'z'; al++) /* iterate from leter a and terminate at z, increment by a letter */
	{	putchar(al);
	}
	for (AL = 'A'; AL <= 'Z'; AL++) /* iterate from leter A and terminate at Z, increment by a letter */
	{	putchar(AL);
	}
	putchar('\n');
	return (0);
}

