#include "lists.h"
/**
 * print_list - Prints the elements of a linked list.
 *
 * @h: pointer to node struct
 * Return: a
 */
size_t print_list(const list_t *h)
{
	int a;

	for (a = 0 ; h != NULL ; a++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
	}
	return (a);
}
