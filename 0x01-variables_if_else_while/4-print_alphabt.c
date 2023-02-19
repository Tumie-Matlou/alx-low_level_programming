#include <stdio.h>

/**
 * main - Entry point
 * program that prints the alphabet in lowercase, followed by a new line
 * all letters except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char al = 'a'; /* initialise lowercase alphabets(al) to a */

	while (al <= 'z') /* whenever the letter is z or below, proceed to code block*/
	{
		if ((al != 'q') && (al != 'e')) /* proceed to print letters that are NOT q and e, */
		{
			putchar(al);
		}
		al++; /* increment by a letter */
	}
	putchar('\n');
	return (0);
}
