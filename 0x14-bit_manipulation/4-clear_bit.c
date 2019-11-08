#include "holberton.h"
/**
 * clear_bit - clear a bit
 *
 * @n: pointer to a number
 * @index: index to clear
 * Return: 1 if successful or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a = 1;
	unsigned int b = sizeof(*n) * 8 - 1;

	if (index > b)
		return (-1);
	a <<= index;
	*n &= ~a;
	return (1);
}
