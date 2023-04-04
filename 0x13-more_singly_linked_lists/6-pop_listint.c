#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletst head node of list
 * returns head node data
 * @head: pointer to pointer to the head node
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *h = *head;
	listint_t *new_head;
	int val;

	val = h->n;
	new_head = h->next;
	free(h);
	*head = new_head;
	return (val);
}
