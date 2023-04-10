#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * rev_array -reverses an array
 * @arr: array to reverse
 * @len: the length of the array
 */

void rev_array(int arr[], int len)
{
	int i, *arr_copy;

	arr_copy = (int *) malloc(sizeof(int) * len);
	memcpy(arr_copy, arr, sizeof(int) * len);
	for (i = 0; i < len; i++)
		arr[i] = arr_copy[len - i - 1];
	free(arr_copy);
}

/**
 * get_bit - printts the bit at given index
 * @n: the number to retive bit from
 * @index: the index
 * Return: Value of bit
 * -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1, copy_of_n = n;
	unsigned int length = 0, j;
	int i, arr[32];

	if (n == 0)
		return (0);

	while (copy_of_n > 0)
	{
		length++;
		copy_of_n >>= 1;
	}
	length -= 1;
	if (length > 0)
		mask = mask << length;
	i = 0;
	while (mask > 0)
	{
		if (n & mask)
			*(arr + i) = 1;
		else
			*(arr + i) = 0;
		mask >>= 1;
		i++;
	}
	rev_array(arr, i);
	j = 0;
	while (j <= index && j <= length)
	{
		if (j == index)
			return (*(arr + j));
		j++;
	}
	return (-1);
}
