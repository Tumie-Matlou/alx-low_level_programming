#include <stdio.h>

/**
 * main - Entry point
 *
 * a program that prints the size of various types
 * Return: Always 0 (success)
 */
int main(void)
{	char c; /* initialising the 'char' to c */
	int i; /* initialising the 'int' to i */
	long li; /* intialising the 'long int' to li */
	long long lli; /* intialising the 'long long int' to lli */
	float f; /* intialising the 'float' to f */

	printf("Size of a char: %ld byte(s)\n", sizeof(c)); /* print the size of 'char' in bytes on the screen */
	printf("Size of an int: %ld byte(s)\n", sizeof(i)); /* print the size of 'int' in bytes on the screen */
	printf("Size of a long int: %ld byte(s)\n", sizeof(li)); /* print the size of 'long int' in bytes on the screen */
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli)); /* print the size of 'long long int' in bytes on the screen */
	printf("Size of a float: %ld byte(s)\n", sizeof(f)); /* print the size of 'float' in bytes on the screen */
		return (0);
}
