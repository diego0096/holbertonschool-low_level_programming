#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - check the code for Holberton School students.
 *
 * @array: function  that iterate
 * @size: type of size
 * @action: pointer to function
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (a = 0 ; a < size ; a++)
		action(array[a]);
}
