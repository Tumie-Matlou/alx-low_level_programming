#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 * A program that prints a random number and its sign
 */
int main(void)
{
	int n; /* intialising a variable n */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0) /* setting condition for program to proceed ONLY if TRUE */
{	printf("%d is negative\n", n); /* print the sentence in quotes when condition above is met */
}
	else if (n > 0) /* otherwise, the program should proceed ONLY if this alternate condition is TRUE */
{	printf("%d is positive\n", n); /* print the sentence in quotes when condition above is met */
}
else /* Proceed if none of the above conditions are met */
{	printf("%d is zero\n", n); /* print the sentence in quotes */
}
	return (0);
}
