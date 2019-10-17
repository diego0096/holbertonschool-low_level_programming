#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *malloc_checked - check the code for Holberton School students.
 *
 * @b: unsigned int type
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
