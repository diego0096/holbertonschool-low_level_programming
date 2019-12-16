#include "lists.h"
/**
 * sum_dlistint - function to sum the elements.
 *
 * @head: pointer of type dlistint_t.
 * Return: sum of all elements.
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
