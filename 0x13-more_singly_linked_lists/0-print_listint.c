#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - prints a list of integers
 * @h: the singly linked list
 * Return: the number of elements in listcd
*/

size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	
	while (h != NULL)
	{
		printf("%i\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
