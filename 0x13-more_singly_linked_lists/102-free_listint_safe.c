#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees previously allocated memory for the list
 * @h: a double pointer to the list or head node
 * Return:  number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *previous = NULL;

	if (h == NULL || *h == NULL)
		return (0);/*if no list*/

	while (*h != NULL)
	{
		temp = (*h)->next;
		(*h)->next = previous;
		previous = *h;
		*h = temp;
		count++;
		if (previous <= temp)
			break;
	}
	while (previous != NULL)
	{
		temp = previous->next;
		free(previous);
		previous = temp;
	}
	*h = NULL;
	return (count);
}
