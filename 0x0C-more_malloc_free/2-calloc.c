#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_calloc - function to allocate memory
 * @nmemb: unsigned int type
 * @size: unsigned int type
 *
 * Return: A pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0 ; b < nmemb * size ; b++)
	{
		a[b] = 0;
	}
	return (a);
}
