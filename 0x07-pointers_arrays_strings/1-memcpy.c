#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: memory area copied into
 * @src: memory area copied
 * @n: number of bytes copied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;/*declare index*/

	for (i = 0; i < n && src[i] != '\0'; i++)/*iterate through n bytes of string*/
	{
		dest[i] = src[i];/*copy char at src into crrspnd index in dest, loop*/
	}
	while (i < n)
	{
		dest[i] = '\0';/*null replaces dest*/
		i++;/*move to next char*/
	}
	return (dest);
}
