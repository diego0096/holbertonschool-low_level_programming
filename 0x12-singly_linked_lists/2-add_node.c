#include "lists.h"
/**
 * add_node - function to add a node at the beginnig
 *
 * @head: double pointer of list_t struc type.
 * @str: pointer of the string input
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *t;
	unsigned int c;

	t = malloc(sizeof(list_t));
		if (t == NULL)
			return (NULL);
		for (c = 0 ; str[c] != '\0' ; c++)
		{

		}
	t->len = c;
	t->str = strdup(str);
	t->next = *head;
	*head = t;
	return (*head);
}
