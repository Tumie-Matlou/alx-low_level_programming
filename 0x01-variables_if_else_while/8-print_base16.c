#include <stdio.h>

/**
 * main - Entry point
 * program that prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	int n = '0';
	int a_to_f = 'a';

	while (n <= '9') /* proceed as long as variable n is less or equal to 9 */
	{	putchar(n);
		n++; /* increment n */
	}

	while (a_to_f <= 'f') /* proceed a long as variable a_to_f is letters a and/between f */
	{	putchar(a_to_f);
		a_to_f++; /* increment by letter */
	}
	putchar('\n');
	return (0);
}
