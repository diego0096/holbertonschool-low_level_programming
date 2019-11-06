#include "lists.h"
/**
 * sum_listint - function to sum int values of nodes
 *
 * @head: pointer to head node
 * Return:  always successful
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
