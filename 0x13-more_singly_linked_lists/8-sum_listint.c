#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data(n) in a listint_t list
 * @head: first node in the linked list
 * Desscription: will find the sum of all elements
 *
 * Returns: 0 if list is empty
 */

/* Returns the sum of all the data values in a linked list */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
