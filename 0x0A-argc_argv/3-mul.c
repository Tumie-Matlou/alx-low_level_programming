#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: counts the number of arguments
 * @argv: an arry of strings
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
