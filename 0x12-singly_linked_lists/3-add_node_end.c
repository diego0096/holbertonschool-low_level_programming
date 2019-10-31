#include "lists.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t;
	list_t *f;
	unsigned int c;

	for (c = 0 ; str[c] != NULL ; c++)
	{

	}
	f = malloc(sizeof(list_t));
	if (f == NULL)
		return (NULL);
	f->str = strdup(str);
	f->len = c;

