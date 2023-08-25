#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of dlistint_t list.
 * @head: Pointer to a pointer to the head of linked list.
 * @n: number to be stored in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
	last = last->next;

	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}