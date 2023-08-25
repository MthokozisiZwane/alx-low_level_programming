#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in dlistint_t list.
 * @h: Pointer to the head node of the linked list.
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counts = 0;

	while (h != NULL)
	{
		h = h->next;
		counts++;
	}

	return (counts);
}
