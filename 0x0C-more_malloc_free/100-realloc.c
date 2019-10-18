#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - reallocate memory size function
 *
 * @ptr: pointer to address
 * @old_size: unsigned int type of old memory size
 * @new_size: unsigned int type for new memory size
 * Return: A pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;

	if (new_size > old_size)
	{
		a = malloc(new_size);
		free(ptr);
		return (a);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		a = malloc(new_size);
		free(ptr);
		return (a);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
