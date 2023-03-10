#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the value to swap
 * @b: the value to swap
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
