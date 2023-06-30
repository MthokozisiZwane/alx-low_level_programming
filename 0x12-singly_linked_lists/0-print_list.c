#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list_t.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t counts = 0;

	printf("[");
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("%s", h->str);
		else
			printf("[0] (nil)");

		h = h->next;
		counts++;

		if (h != NULL)
			printf(", ");
	}
	printf("]\n");

	return (counts);
}
