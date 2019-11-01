#include "lists.h"
/**
 * add_node_end - check the code for Holberton School students.
 *
 * @head: double pointer of list_t struct type.
 * @str: pointer to string input.
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t;
	list_t *f;
	unsigned int c;

	for (c = 0 ; str[c] != '\0' ; c++)
	{

	}
	f = malloc(sizeof(list_t));
	if (f == NULL)
		return (NULL);
	f->str = strdup(str);
	f->len = c;
	if (*head == NULL)
	{
		*head = f;
		f->next = NULL;
		return (*head);
	}
	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = f;
	f->next = NULL;

	return (*head);
}
