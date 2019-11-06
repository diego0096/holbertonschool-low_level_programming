#include "lists.h"
/**
 * delete_nodeint_at_index - functioon to delete node at nth  position
 *
 * @head: pointer to head
 * @index: point of node deletion
 * Return: 1 if susccessful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *d = NULL;
	unsigned int i = 0;
	int r = -1;

	if (*head && index == 0)
	{
		*head = temp->next;
		free(temp);
		r = 1;
	}
	else if (*head)
	{
		while (temp && (++i != index))
			temp = temp->next;

		if (temp)
		{
			d = temp->next;
			temp->next = (temp->next)->next;
			free(d);
			r = 1;
		}
	}
	return (r);
}
