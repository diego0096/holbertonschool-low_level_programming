#include "holberton.h"
/**
 * binary_to_uint - function to convert binary to unsigned int
 *
 * @b: pointer that represents a binary number.
 * Return: c.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int c = 0;
	unsigned int d = 1;
	int a;

	if (b == NULL)
		return (0);
	for (a = 0 ; b[a] != '\0' ; a++)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}
		c <<= 1;
		if (b[a] == '1')
		{
			c ^= d;
		}
	}
	return (c);
}
