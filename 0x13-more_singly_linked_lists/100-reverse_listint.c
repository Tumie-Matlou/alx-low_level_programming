#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: start of the list or the head node
 * Return: pointer to head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *previous;

	if (*head == NULL || head  == NULL)
		return (NULL);/*if no list present*/
	previous = NULL;
	while (*head !=  NULL)/*iterate list*/
	{
		next = (*head)->next;
		(*head)->next = previous;/*link current node to previous one*/
		previous = *head;/*make previous node the current*/
		*head = next;/*make current node next node*/
	}
	(*head) = previous;/*make last node new head, ptr to previous node*/
	return (*head);
}
