#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: the pointer to the list
 * @index: the given nth node
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i != index)
		{
			head = head->next;
			i++;
		}
		else if (i == index)
			return (head);
	}
	return (0);
}
