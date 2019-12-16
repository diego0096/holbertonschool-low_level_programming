#include "lists.h"
/**
 * insert_dnodeint_at_index - function to insert node at given index
 * @h: double pointer type to head of list
 * @idx: index at which node will be added
 * @n: int type for data to be added
 * Return: node if successful, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nd = malloc(sizeof(dlistint_t));
	dlistint_t *t;
	unsigned int count;

	if (nd == NULL)
		return (NULL);
	nd->n = n;
	nd->prev = NULL;
	nd->next = NULL;
	if (*h == NULL)
	{
		*h = nd;
		nd->next = NULL;
		return (nd);
	}
	t = *h;
	if (idx == 0)
	{
		nd->next = t;
		t->prev = nd;
		*h = nd;
		return (nd);
	}
	for (count = 0 ; count != (idx - 1) ; count++)
	{
		t = t->next;
		if (t == NULL)
		{
			free(nd);
			return (NULL);
		}
	}
	nd->next = t->next;
	nd->prev = t;
	if (t->next == NULL)
		t->next = nd;
	else
		t->next->prev = nd;
		t->next = nd;
	return (nd);
}
