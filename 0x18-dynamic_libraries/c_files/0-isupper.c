#include "holberton.h"
/**
 * _isupper - Checks if the variable is uppercase.
 *
 * @c: int type number
 * Return: if it is uppercase return 1 if not return 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);

	return (0);
}
