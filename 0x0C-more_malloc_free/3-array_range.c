#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *array_range - make  memory for an array
 *
 * @min: int type
 * @max: int type
 * Return: A pointer
 */
int *array_range(int min, int max)
{
	int *a;
	int b;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0 ; min <= max ; min++, b++)
	{
		a[b] = min;
	}
	return (a);
}
