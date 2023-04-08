#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: binary character 1s and 0s
 * Return: a converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, result = 1;
	const char *str;
	int i;

	if (b == NULL)
		return (0);
	for (str = b; *str != '\0'; str++) /*iterates string*/
	{
		if (*str == '1')/*checks for 1 in string*/
		{
			i = strlen(b) - (str - b) - 1;
			while (i > 0)/*converts to base 10*/
			{
				result *= 2;
				i--;
			}
			sum += result;/*adds result to sum*/
			result = 1;
		}

		else if (*str == '0')/*checks for 0 in string*/
		{
			i = strlen(b) - (str - b) - 1;
			result = 1;
		}

		else/*if anything else, exit function*/
				return (0);
	}
	return (sum);
}
