#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: a pointer to the pointer to the head node
 * @n: new data to add to list
 * Return: head pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;/*pointer to new node*/
	listint_t *curr_last;/*pointer to current last node*/

	new_node = (listint_t *) malloc(sizeof(listint_t));/*allocate memory*/
	if (new_node == NULL)/*malloc check*/
		return (0);
	new_node->n = n;/*assign new node's data*/
	new_node->next = NULL;/*assign new node's pointer end list*/
	if (*head == NULL)/*check if list is empty*/
	{
		*head = new_node;/*make new node head and return head*/
		return (*head);
	}
	curr_last = *head;/*set pointer to curr last node equal head pointer*/
	while (curr_last->next != NULL)
		curr_last = curr_last->next;/*iterate list till last node*/
	curr_last->next = new_node;/*set curr last node pointer to new node*/
	return (*head);
}
