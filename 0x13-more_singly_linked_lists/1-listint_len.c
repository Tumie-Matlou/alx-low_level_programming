#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - printts the number of elements in a linked list
 * @h: singly linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
