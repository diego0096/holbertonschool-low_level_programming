#include "holberton.h"
/**
 * print_triangle - check the code for Holberton School students.
 *
 * @size: int type
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int c;
	int d;
	int e;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (c = 0 ; c < size ; c++)
	{
		e = size - c;
		for (d = 1 ; d <= size ; d++)
		{
			if (d < e)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}

		if (size <= 0)
		{
			_putchar('\n');
			return;
		}
	_putchar('\n');

	}
}
