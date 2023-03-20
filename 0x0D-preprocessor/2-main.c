#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the name of the file using a macro
 *
 * Return: 0  on success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
