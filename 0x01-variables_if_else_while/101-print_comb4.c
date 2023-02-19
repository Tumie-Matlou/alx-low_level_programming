#include <stdio.h>

/**
 * main - Entry point
 * a program that print all different combinations of 3 digits
 * Return: 0 (success)
 */
int main(void)
{
	int one;
	int ten;
	int hundred;

	for (hundred = '0'; hundred <= '9'; hundred++) /* setting hundreds iteration, with incrementation */
	{
		for (ten = (hundred + 1); ten <= '9'; ten++) /* tens = hundreds + 1, with incrementation*/
		{
			for (one = (ten + 1); one <= '9'; one++) /*ones = tens + 1, with incrementation*/
			{
				putchar(hundred);
				putchar(ten);
				putchar(one);
				if (hundred != '7' || ten != '8' || one != '9') /* condition not to place comma and space after last possible combination */
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
