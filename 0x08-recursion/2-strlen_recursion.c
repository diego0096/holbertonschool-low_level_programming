#include "holberton.h"
/**
 * _strlen_recursion - check the code for Holberton School students.
 *
 * @s: pointer to the string
 * Return: a
 */
int _strlen_recursion(char *s)
{
	int a;

	if (*s == '\0')
	{
		return (0);
	}
	else
		a = 1;
	return (a + _strlen_recursion(s + 1));
}
