#include "holberton.h"
/**
 * factorial - check the code for Holberton School students.
 *
 * @n: int type
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n >= 1)
		return (n * factorial(n - 1));
	else
		return (1);
}
