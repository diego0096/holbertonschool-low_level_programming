#include "holberton.h"
/**
 * _puts_recursion - check the code for Holberton School students.
 *
 * @s: pointer to input string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}