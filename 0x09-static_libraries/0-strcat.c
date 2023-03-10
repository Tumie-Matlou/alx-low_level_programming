#include "main.h"

/**
 * _strcat - concatenates src string into dest string
 * @src: the source string
 * @dest: the destination of source string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;/*declare integers*/
	int j = 0;

	while (*(dest + i))
	{
		i++;/*point to the last index of dest(i.e \0)*/
	}

	while (*(src + j))
	{
		*(dest + i) = *(src + j);/*null dest index = start point to src string*/
		i++;/*move to next index of dest*/
		j++;/*move to next index of src*/
	}
	*(dest + i) = '\0';/*address of dest is \0*/

	return (dest);
}
