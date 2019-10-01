#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 *
 * @str: char type
 */
void puts_half(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++)
	{

	}
	a++;
	for (a /= 2 ; str[a] != '\0' ; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
