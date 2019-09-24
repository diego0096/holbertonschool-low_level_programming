#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 *@a: int type
 *
 * Return: the last digit
 */
int print_last_digit(int a)
{
	int b;

	if (a >= 0)
	b = a % 10;
	else
	b = (a % 10) * -1;
	_putchar (b + '0');
	return (b);
}
