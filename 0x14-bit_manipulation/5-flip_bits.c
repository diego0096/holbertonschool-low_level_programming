#include "holberton.h"
/**
 * flip_bits - return the number of bits.
 *
 * @n: unsigned long int type
 * @m: unsigned long int type
 * Return: the count of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned long int c;

	a = n ^ m;
	for (c = 0; a > 0;)
	{
		if ((a & 1) == 1)
			c++;
		a = a >> 1;
	}

	return (c);
}
