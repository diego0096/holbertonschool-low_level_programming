#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: pointer to head of const listint_t
 * @n: int value for new node
 * Return: pointer to the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t = NULL;
	listint_t *temp = NULL;

	t = malloc(sizeof(listint_t));
	if (t == NULL)
		return (NULL);
	t->n = n;
	if (*head == NULL)
	{
		*head = t;
		t->next = NULL;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = t;
	t->next = NULL;

	return (*head);
}
