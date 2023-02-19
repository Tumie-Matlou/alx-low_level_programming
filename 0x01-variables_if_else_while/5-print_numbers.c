#include <stdio.h>

/**
 * main - Entry point
 *  program that prints all single digit numbers of base ten starting from zero
 *  Return: 0 (success)
 */
int main(void)
{	char num = '0';

	for (num = '0'; num <= '9'; num++) /* the num variable is zero equal or less than 9, incremented by 1 */
	{	putchar(num);
	}
	putchar('\n');
	return (0);
}


