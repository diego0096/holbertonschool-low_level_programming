#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - create an array with c
 * @c: char type
 * @size: the size of the memory to print
 *
 * Return: a
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(c) * size);
	if (a == 0)
	{
		return (NULL);
	}
	for (b = 0 ; b < size ; b++)
	a[b] = c;
	return (a);
}
