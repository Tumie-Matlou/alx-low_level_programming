#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: a pointer to the pointer to the head node
 * @n: the new data to add
 * Return: a pointer to the new head node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (0);
	new_node->n = n;
	new_node->next = *head;
	(*head) = new_node;
	return (*head);
}
