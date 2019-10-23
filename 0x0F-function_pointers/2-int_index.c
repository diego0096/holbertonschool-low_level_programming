#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - check the code for Holberton School students.
 *
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (a = 0 ; a < size ; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
