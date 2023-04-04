#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given position
 * @head: pointer to pointer to the head node of list
 * @index: the given position
 * Return: 1 on success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *temp = *head;
	listint_t *delete;
	unsigned int i;

	if (index == 0)
	{
		current = current->next;
		temp->next = NULL;
		free(temp);
		(*head) = current;
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
			temp = temp->next;
		delete = temp->next;
		temp->next = temp->next->next;
		delete->next = NULL;
		free(delete);
		return (1);
	}
	return (-1);
}
