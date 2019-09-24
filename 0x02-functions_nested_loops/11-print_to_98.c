#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural number
 * @n: int type
 *
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
	{
			printf("%d, ", n);
			n++;
	}
	}
	else if (n > 98)
	{
		while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	}
	printf("98\n");
}
