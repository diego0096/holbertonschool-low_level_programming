#include "holberton.h"
/**
 * print_square - check the code for Holberton School students.
 *
 * @size: int type
 * Description: Print a square..
 */
void print_square(int size)
{
int c;
int d;

	for (c = 1 ; c <= size ; c++)
		{
		for (d = 1 ; d <= size ; d++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
		if (size <= 0)
			_putchar('\n');
}
