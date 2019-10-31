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

	for (h = 0 ; a != '\0' ; a++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
	}
	return (a);
}
