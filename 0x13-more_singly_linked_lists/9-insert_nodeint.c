#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given index
 * @head: a pointer to the pointer to the head node
 * @idx: given position
 * @n: the data of the new node
 * Return: the head pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int i = 0;

	if (*head == NULL)
		return (0);

	if (idx == 0)
	{
		new_node = (listint_t *) malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (0);
		new_node->n = n;
		new_node->next = *head;
		return (*head);
	}
	current = *head;
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new_node = (listint_t *) malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (0);
			new_node->n = n;
			new_node->next = current->next;
			current->next = new_node;
			break;
		}
		current = current->next;
		i++;
	}
	return (*head);
}
