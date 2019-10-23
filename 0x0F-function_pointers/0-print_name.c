#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - check the code for Holberton School students.
 *
 * @name: pointer of char type
 * @f: pointer to function
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
