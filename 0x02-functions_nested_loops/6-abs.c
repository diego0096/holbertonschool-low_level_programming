#include "holberton.h"
/**
 * _abs - check the code for Holberton School students.
 *
 * @a: int type
 * Return: Absolute value of an integer
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}
