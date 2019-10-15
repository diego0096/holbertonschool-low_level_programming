#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - check the code for Holberton School students.
 *
 * @str: pointer to string array
 * Return: c
 */
char *_strdup(char *str)
{
	int a;
	int b;
	char *c;

	if (str == NULL)
		return (NULL);
	for (a = 0 ; str[a] != '\0' ; a++)
	;
	c = malloc(a * sizeof(char) + 1);
	if (c == NULL)
		return (NULL);
	for (b = 0 ; b < a ; b++)
	{
		c[b] = str[b];
		c[a] = str[a];
	}
	return (c);

}
