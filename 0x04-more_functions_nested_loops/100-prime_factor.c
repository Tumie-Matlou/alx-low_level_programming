#include <stdio.h>

/**
 * main - find prime number
 *
 * Description: find largest prime number of 612852475143
 *
 * Return: 0 (success)
 */

int main(void)
{
	long int num, lower, test;

	num = 612852475143;
	lower = 2;
	test = 2;

	while (num > test)
	{
		if (num % test == 0)
		{
			lower = test;
			num = num / lower;
			test = lower + 1;
		}
		else
			test++;
	}
	printf("%ld\n", num);
	return (0);
}
