#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node.
 *
 * @h: Pointer to a pointer to the first node.
 * @idx: Position for node to be inserted.
 * @n: Number in the node.
 * Return: The address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t;
	dlistint_t *new_node;
	unsigned int count;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);
	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);
	t = *h;
	if (idx == 0)
	{
		if (*h == NULL)
			*h = new_node;
		else
		{
			new_node->next = t;
			t->prev = new_node;
			*h = new_node;
		}
		return (new_node);
	}
	for (count = 0; t->next != NULL || count + 1 == idx; count++)
	{
		if (count + 1 == idx)
		{
			if (t->next != NULL)
				t->next->prev = new_node;
			new_node->next = t->next;
			t->next = new_node;
			new_node->prev = t;
			return (new_node);
		}
		t = t->next;
	}
	free(new_node);
	return (NULL);
}
