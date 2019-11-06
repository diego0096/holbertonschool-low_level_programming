#include "lists.h"
/**
 * free_listint2 - function to free heap memory used.
 *
 * @head: pointer to head of const listint_t.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	while (head && *head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
