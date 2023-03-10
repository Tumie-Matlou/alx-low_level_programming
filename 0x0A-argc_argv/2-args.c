#include <stdio.h>

/**
 * main - entry point
 * @argc: counts the number of arguments
 * @argv: an array of strings
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
