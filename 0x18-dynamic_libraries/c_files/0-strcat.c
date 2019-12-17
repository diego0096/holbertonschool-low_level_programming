#include "holberton.h"
/**
 * *_strcat - Concatenate strings.
 *
 * @dest: Destination for the concatenation
 * @src: source of the string
 * Return: the destination string
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0 ; dest[a] != '\0' ; a++)
	{

	}
	for (b = 0 ; src[b] != '\0' ; b++, a++)
	{
	dest[a] = src[b];
	}
	return (dest);
}
