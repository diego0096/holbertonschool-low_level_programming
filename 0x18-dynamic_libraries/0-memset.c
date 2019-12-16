#include "holberton.h"
/**
 * *_memset - set memory function
 * @s: pointer to array
 * @b: char type
 * @n: unsigned int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0 ; n > 0 ; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
