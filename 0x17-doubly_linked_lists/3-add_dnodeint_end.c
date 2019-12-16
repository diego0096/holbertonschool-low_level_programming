#include "lists.h"
/**
 * add_dnodeint_end - function to add node to the end.
 *
 * @head: double pointer of dlistint_t type.
 * @n: int of const type of data.
 * Return: node if successful.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nd = malloc(sizeof(dlistint_t));
	dlistint_t *t = *head;

	if (nd == NULL)
		return (NULL);
	nd->n = n;
	nd->prev = NULL;
	nd->next = NULL;
	if (*head == NULL)
	{
		*head = nd;
		return (*head);
	}
	while (t->next != NULL)
	{
		t = t->next;
	}
	nd->prev = t;
	t->next = nd;
	return (nd);
}
