#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - counts the number of elements
 * @h: the list
 * Return: the number of elements
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			n++;
			h = h->next;
		}
		n++;
		h = h->next;
	}
	return (n);
}
