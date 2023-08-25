#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of dlistint_t linked list.
 * @head: Pointer to the head node of the linked list.
 * @index: Index of the node to retrieve (starting from 0).
 * Return: The nth node of the list, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		if (count == index)
		return (current_node);

		current_node = current_node->next;
		count++;
	}

	return (NULL);
}
