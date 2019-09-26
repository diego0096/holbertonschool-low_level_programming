#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int c;
	int d;

	for (c = 0 ; c < 10 ; c++)
	{

		for (d = 0 ; d < 15 ; d++)
		{
			if (d > 9)
				_putchar(d / 10 + 48);
			_putchar(d % 10 + 48);

		}
		_putchar('\n');
	}
}
