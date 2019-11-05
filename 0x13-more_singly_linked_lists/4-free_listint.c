#include "lists.h"
/**
 * free_listint - Frees a list of nodes
 *
 * @head: Pointer to the first element of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head->next = head;
		free(temp);
	}
}
