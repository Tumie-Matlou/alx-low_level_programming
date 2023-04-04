#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a singly linked list while setting head to null
 * @head: pointer to the pointer to the head node
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
