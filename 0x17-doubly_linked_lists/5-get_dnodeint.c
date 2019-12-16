#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node.
 *
 * @head: Pointer to the first node.
 * @index: Node index to return.
 * Return: If found the node at the index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; head != NULL && a <= index; a++)
	{
		if (a == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
