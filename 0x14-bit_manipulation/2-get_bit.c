#include "holberton.h"
/**
 * get_bit - Returns a value at a given index
 *
 * @n: unsigned long int type
 * @index: unsigned int type
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	for (a = 0 ; a < index ; a++)
		n = n >> 1;
	return ((n & 1));
}
