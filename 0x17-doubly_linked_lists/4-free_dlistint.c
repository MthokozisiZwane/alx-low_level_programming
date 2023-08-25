#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head node of the linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	dlistint_t *next;

	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node);
		current_node = next;
	}
}
