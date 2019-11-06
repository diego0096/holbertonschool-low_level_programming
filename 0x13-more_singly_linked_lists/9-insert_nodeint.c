#include "lists.h"
/**
 * insert_nodeint_at_index - function to insert node at nth location
 *
 * @head: pointer to head of struct listint_t type
 * @idx: unsigned int for location to add node
 * @n: int type for value of new node
 * Return: The address of the newly created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *temp = *head;
	unsigned int a = 0;

	new = malloc(sizeof(listint_t));
	if (new == 0 && idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	else if (new)
	{
		while (temp && (++a != idx))
			temp = temp->next;
	
		if (temp)
		{
			new->n = n;
			new->next = temp->next;
			temp->next = new;
		}
		else
		{
			free(new);
			new = NULL;
		}
	}
	return (new);
}
