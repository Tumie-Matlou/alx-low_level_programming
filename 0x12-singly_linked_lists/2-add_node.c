#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node in front of the list
 * @head: pointer to the value of head node
 * @str: poiinter to value string
 * Return: the address of new head node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = (list_t *) malloc(sizeof(list_t));
	if (new_head == NULL)
		return (0);
	new_head->str = strdup(str);
	new_head->next = (*head);
	(*head) = new_head;

	return (*head);
}
