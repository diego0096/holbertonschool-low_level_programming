#include "holberton.h"
/**
 * _strspn - check the code for Holberton School students.
 *
 * @s: pointer array
 * @accept: pointer array
 * Return: a
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0 ; s[a] ; a++)
	{
		for (b = 0 ; accept[b] ; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!accept[b])
			break;
	}
	return (a);
}
