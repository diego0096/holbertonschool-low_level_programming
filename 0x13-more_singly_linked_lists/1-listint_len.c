#include "lists.h"
/**
 * listint_len - function to print all elements
 *
 * @h: listint_t type of node struct
 * Return: The nurmber of elements.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int c;

	for (c = 0 ; h != NULL ; c++)
	{
		h = h->next;
	}
	return (c);
}
