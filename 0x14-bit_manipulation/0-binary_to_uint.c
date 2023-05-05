#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @str: the string
 * Return: the length of a string
 */
int _strlen(const char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	return (len);
}

/**
 * binary_to_uint - converts a binary number to an unsuígned integer
 * @b: binary character 1s and 0s
 * Return: a converted number
 */
unsigned int binary_to_uint(const  char *b)
{
	unsigned int sum = 0, mask = 1;
	int i;
	const char *str;

	if (b == NULL)/*validate string*/
		return (0);
	for (str = b; *str != '\0'; str++)
	{
		if (*str == '1')/*check for 1*/
		{
			i = _strlen(b) - (str - b) - 1;
			while (i > 0)/*convert to base 10*/
			{
				mask *= 2;
				i--;
			}
			sum += mask;/*adds mask to sum*/
			mask = 1;
		}
		else if (*str == '0')/*checks for 0*/
		{
			i = _strlen(b) - (str - b) - 1;
			mask = 1;
		}
		else
			return (0);
	}
	return (sum);
}
