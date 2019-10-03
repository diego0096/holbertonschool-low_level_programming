#include "holberton.h"
/**
 * *_strncpy - check the code for Holberton School students.
 *
 * @dest: destination of copy
 * @src: source of the string
 * @n: determinate the size
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0 ; a < n && src[a] != '\0' ; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a < n ; a++)
	dest[a] = '\0';
	return (dest);
}
