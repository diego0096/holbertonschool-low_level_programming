#include "lists.h"
/**
 * print_dlistint - function to print the elements.
 *
 * @h: pointer of const dlistint_t type
 * Return: return list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int c;

	for (c = 0 ; h != NULL ; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
