#include "holberton.h"
/**
 * *string_toupper - check the code for Holberton School students.
 *
 * @a: pointer
 * Return: a.
 */
char *string_toupper(char *a)
{
	int b;

	for (b = 0 ; a[b] != '\0' ; b++)
	{
		if (a[b] >= 'a' && a[b] <= 'z')
		{
			a[b] = a[b] - 32;
		}
	}
	return (a);
}
