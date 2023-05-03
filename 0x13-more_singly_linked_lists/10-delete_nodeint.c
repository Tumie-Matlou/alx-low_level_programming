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
	listint_t *temp = *head;
	listint_t *delete;
	unsigned int i;

	if (*head == NULL)/*Malloc check*/
		return (-1);

	if (index == 0)/*if only head node*/
	{
		*head = temp->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)/*else iterate thru list*/
		temp = temp->next;
	if (temp == NULL || temp->next == NULL)/*end of list*/
		return (-1);
	delete = temp->next;
	temp->next = delete->next;
	free(delete);
	return (1);
}
