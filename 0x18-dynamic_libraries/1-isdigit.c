#include "holberton.h"
/**
 * _isdigit - check if the chracter is a numeric character.
 *
 * @c: Int type number
 * Return: 1 if c is a digit, otherwise 0.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);

return (0);
}
