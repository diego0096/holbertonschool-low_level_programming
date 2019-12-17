#include "holberton.h"
/**
 * *_strcpy - check the code for Holberton School students.
 *
 * @dest: char type
 * @src: char type
 * Return: the value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0 ; src[a] != '\0' ; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
