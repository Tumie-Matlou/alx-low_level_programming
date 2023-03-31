#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints the elements of a singly linked list
 * @h: the list
 * Return: the number of elements in list
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)/*Check if last node*/
	{
		if (h->str == NULL)/*validate string*/
			printf("%s %s\n", "[0]", "(nil)");
		else
			printf("[%lu] %s\n", strlen(h->str), h->str);
		h = h->next;
		n++;
	}
	return (n);
}
