#include "lists.h"
/**
 * *add_nodeint - function to add node from top
 *
 * @head: listint_t type of node struct pointer to head
 * @n: const int type
 * Return: A pointer.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
