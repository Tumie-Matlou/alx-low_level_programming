#include <stdio.h>

/**
 * main - Entry point
 * program that prints all single digit numbers of base ten starting from zero
 * Return: 0 (success)
 */
int main(void)
{	int i = 0;

	for (i = 0; i <= 9; i++)
	{	putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
