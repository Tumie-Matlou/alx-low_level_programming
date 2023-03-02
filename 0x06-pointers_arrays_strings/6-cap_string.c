#include "main.h"

/**
 * cap_string - capitalize first letter of each word
 * @p: string to change
 * Return: capitalised string
 */

char *cap_string(char *p)
{
	int i;

	i = 0;
	/*check case of first char*/
	if (p[i] >= 97 && p[i] <= 122)
	{
		p[i] -= 32;/*make first character uppercase*/
	}

	i++;/*move to next character*/

	while (p[i] != '\0') /*iterate through string*/
	{
		if ((p[i] >= 97 && p[i] <= 122)/*if lowercase*/
		&& (/*and prior character is separator, capitalise*/
			p[i - 1] == ',' || p[i - 1] == ';' || p[i - 1] == '.' ||
			p[i - 1] == '!' || p[i - 1] == '?' || p[i - 1] == '"' ||
			p[i - 1] == '(' || p[i - 1] == ')' || p[i - 1] == '{' ||
			p[i - 1] == '}' || p[i - 1] == ' ' || p[i - 1] == '\t'
			|| p[i - 1] == '\n'))
		{
			p[i] -= 32;/*make character uppercase*/
		}

		i++;
	}

	return (p);
}
