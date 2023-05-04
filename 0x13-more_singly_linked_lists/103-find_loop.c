#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a list
 * using cycle detection algorithim to pick up differing nodes
 * @head: a pointer to the list or the head node
 * Return: int
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *diff, *same;

	diff = head;
	same = head;
	while (diff != NULL && same != NULL)/*iterate list*/
	{
		diff = diff->next;
		same = same->next->next;
		if (diff == same)
		{
			diff = head;
			while (diff != same)
			{
				diff = diff->next;
				same = same->next;
			}
			return (diff);
		}
	}
	return (NULL);
}
