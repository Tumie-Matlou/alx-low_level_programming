#include <stdio.h>

/**
 * main - Entry point
 * program that prints all possible different combinations of two digits
 * Return: 0 (success)
 */
int main(void)
{	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = (a + '1'); b <= '9'; b++)
		{	putchar(a);
			putchar(b);
			if ((a != '8') && (b != '9'))
			{	putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
