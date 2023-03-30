#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of list
 * @head: pointer to new end node
 * @str: pointer to value string
 * Return: address of new tail element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end;
	list_t *last;

	new_end = (list_t *) malloc(sizeof(list_t));
	if (new_end == NULL)
		return (0);
	new_end->str = strdup(str);
	new_end->next = NULL;
	if (*head == NULL)
	{
		*head = new_end;
		return (*head);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_end;
	return (*head);
}
