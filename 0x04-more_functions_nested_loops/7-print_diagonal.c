#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 *
 * @n: int type
 * Description: print a diagonal line.
 */
void print_diagonal(int n)
{

int c;
int d;

	for (c = 1; c <= n; c++)
		{
		for (d = 1; d < c; d++)
			_putchar(' ');
			_putchar('\\');
		_putchar('\n');
		}
	if (n <= 0)
	_putchar('\n');
}
