#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - Returns sum of all the data (n) of dlistint_t linked list.
 * @head: Pointer to the head of the linked list.
 * Return: The sum of all data in the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
