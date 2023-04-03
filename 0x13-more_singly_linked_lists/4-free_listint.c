#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: a pointer to the head node
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;	
		free(current);
		current = next;
	}
}
