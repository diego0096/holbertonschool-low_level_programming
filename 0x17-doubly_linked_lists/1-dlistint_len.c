#include "lists.h"

/**
 * dlistint_len - Counts all the elements.
 *
 * @h: Pointer to the head node.
 * Return: Number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a;

	if (h == NULL)
		return (0);
	for (a = 0; h != NULL; a++)
		h = h->next;
	return (a);
}
