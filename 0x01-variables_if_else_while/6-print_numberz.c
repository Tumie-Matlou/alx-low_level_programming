#include <stdio.h>

/**
 * main - Entry point
 * program that prints all single digit numbers of base ten starting from zero
 * Return: 0 (success)
 */
int main(void)
{	int i = 0;

	for (i = 0; i <= 9; i++) /* variable i is zero, less or equal to 9, incremeted by 1 */
	{	putchar('0' + i);n /* use '0' when variable intialised via int and not char */
	}
	putchar('\n');
	return (0);
}
