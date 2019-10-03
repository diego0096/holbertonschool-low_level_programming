#include "holberton.h"
/**
 * *_strncat - check the code for Holberton School students.
 *
 * @dest: destination of concatenate
 * @src: source of the string
 * @n: int type
 * Return: the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0 ; dest[a] != '\0' ; a++)
	{

	}
	for (b = 0 ; src[b] != '\0' ; b++, a++)
	{
	b < n ? dest[a] = src[b] : b;
	}
	return (dest);
}
