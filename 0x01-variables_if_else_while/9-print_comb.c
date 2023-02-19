#include <stdio.h>

/**
 * main - Entry point
 * a program that prints all possible combinations of single-digit numbers
 * Return: 0 (success)
 */
int main(void)
{	int i = '0';

	while (i <= '9') /* proceed as long as varible i is less of equal to 9 */
	{	putchar(i);
		if (i != '9') /* proceed to commas and spaces after every number that is NOT 9 */
		{	putchar(',');
			putchar(' ');
		}
		i++; /* increment i */
	}
	putchar('\n');
	return (0);
}
