#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums- sum diagonal values
 * @a: pointer to array
 * @size: int type
 * Return: sum of two sides
 *
 */
void print_diagsums(int *a, int size)
{
	int b;
	int c;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	for (b = 0 ; b < size ; b++)
		sum1 += a[(size + 1) * b];
	for (c = 0 ; c < size ; c++)
		sum2 += a[(size - 1) * (c + 1)];
	printf("%d, %d\n", sum1, sum2);
}
