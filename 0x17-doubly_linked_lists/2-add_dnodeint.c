#include "lists.h"
/**
 * add_dnodeint - function to add node at the head.
 *
 * @head: double pointer of dlistint_t type.
 * @n: int of const type.
 * Return: doubly linked list if successful.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *t, *nd = malloc(sizeof(dlistint_t));

	if (nd == NULL)
		return (NULL);
	nd->n = n;
	nd->prev = NULL;
	nd->next = NULL;
	if (*head == NULL)
	{
		nd->next = NULL;
		*head = nd;
		return (*head);
	}
	t = *head;
	nd->next = t;
	t->prev = nd;
	*head = nd;
	return (nd);
}
