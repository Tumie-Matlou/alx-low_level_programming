#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * count_node - counts the number of nodes
 * using cycle detection algorithim to pick up differing nodes
 * @head: a pointer to the list or the head node
 * Return: int
 */
int count_node(const listint_t *head)
{
	int count;
	const listint_t *diff, *same;

	diff = head;
	same = head;
	while (diff != NULL && same != NULL)/*iterate list*/
	{
		diff = diff->next;
		same = same->next->next;
		count++;
		if (diff == same)
		{
			diff = head;
			while (diff != same)
			{
				diff = diff->next;
				same = same->next;
				count++;
			}
			return (count);
		}
	}
	return (0);
}

/**
 * cycle_detect - finds a loop/cycle in the list
 * using the cycle detection algorithm
 * @head: the start of the list or the head node
 * Return: 0 no cycles, 1 cycles found
 */
int cycle_detect(const listint_t *head)
{
	const listint_t *eeny, *meeny;

	eeny = head;
	meeny = head;
	while (eeny != NULL && meeny != NULL)
	{
		eeny = eeny->next;/*one move foward*/
		meeny = meeny->next->next;/*two moves foward*/

		if (eeny == meeny)
			return (1);/*cycle present*/
	}
	return (0);/*no cycles*/
}

/**
 * print_listint_safe - a function that prints a linked list
 * @head: a pointert to the list or the head node
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0, cycle_present;
	size_t n_nodes = 0;
	const listint_t *temp;

	if (head == NULL)
		exit(98);/*no list present*/

	cycle_present = cycle_detect(head);/*check for loops in list*/

	if (cycle_present == 1)/*print till node before loop*/
	{
		count = count_node(head);
		for (cycle_present = 0; cycle_present < count; cycle_present++)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			n_nodes += 1;
			temp = temp->next;
		}
	}
	else if (cycle_present == 0)/*no cycle present*/
	{
		temp = head;
		while (temp != NULL)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			n_nodes += 1;
			temp = temp->next;
		}
	}
	return (n_nodes);
}
