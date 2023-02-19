#include <stdio.h>

/**
 * main - Entry point
 * program that prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i, j;

	for (i = 0; i < 100; i++) /* variable i is zero less than 100, incremented */

	{
		for (j = 0; j < 100; j++) /* variable j is zero less than 100, incremented */
		{
			if (i < j) 
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99) /* place comma and space after two two-digit combinations except the last combination */
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}

	putchar('\n');

	return (0);

}
