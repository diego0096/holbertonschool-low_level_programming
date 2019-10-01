#include "holberton.h"
#include <stdio.h>
/**
 * print_array - check the code for Holberton School students.
 *
 * @a: int type
 * @n: int type
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0 ; b < n ; b++)
	{
		printf("%d", a[b]);
		if (b < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
