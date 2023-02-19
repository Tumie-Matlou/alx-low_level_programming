#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * This program will assign a random number to the variable n each time
 * then proceed to write the last digit of n
 * Return: 0 (success)
 */
int main(void)
{
	int n, las_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	las_dig = n % 10;
	if (las_dig > 5) /* setting condition for program to proceed ONLY if TRUE */
	{	printf("Last digit of %d is %d and is greater than 5\n", n, las_dig); /* print words in quotes on screen */
	}
	else if (las_dig == 0) /* proceed if above condition is not met, and this condition is TRUE */
	{	printf("Last digit of %d is %d and is 0\n", n, las_dig); /* print words in quotes on screen */
	}
else /* otherwise, proceed to below statement if none of the above conditions are met */
{	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, las_dig); /* print words in quotes on screen */
}
return (0);
}
