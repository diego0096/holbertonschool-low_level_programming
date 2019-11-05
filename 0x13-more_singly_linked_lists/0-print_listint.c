#include "lists.h"
/**
 * print_listint - function to print all elements
 *
 * @h: listint_t type of node struct.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int c;

	for (c = 0 ; h != NULL ; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
