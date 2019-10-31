#include "lists.h"
/**
 * list_len - Function to get the length of a node.
 *
 * @h: pointer to nodes.
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	int a;

	if (h == NULL)
		return (0);
	for (a = 0 ; h->next != NULL ; a++)
		h = h->next;
	return (a);
}
