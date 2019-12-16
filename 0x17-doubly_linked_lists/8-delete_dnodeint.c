#include "lists.h"
/**
 * delete_dnodeint_at_index - function to delete node.
 * @head: double pointer of dlistint_t type.
 * @index: index at which node will be deleted
 * Return: 1 if successful or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t1, *t = *head;
	unsigned int count = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = t->next;
		if (t->next != NULL)
			t->next->prev = NULL;
		free(t);
		return (1);
	}

	while (count < (index - 1))
	{
		if (t == NULL)
			return (-1);
		t = t->next;
		count++;
	}
	t1 = t->next->next;
	if (t->next->next != NULL)
		t->next->next->prev = t;
	free(t->next);
	t->next = t1;
	return (1);
}
