#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * for multiple of 3, it prints Fizz
 * for multiple of 5, it prints Buzz
 * for multiple of 3 and 5, it prints FizzBuzz
 * Return: 0 (succes)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
