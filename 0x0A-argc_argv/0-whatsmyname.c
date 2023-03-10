#include <stdio.h>

/**
 * main - entry point
 * @argc: counts the number of arguments in command line
 * @argv: array of strings in command line
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
