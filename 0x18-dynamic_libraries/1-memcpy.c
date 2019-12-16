#include "holberton.h"
/**
 * *_memcpy - prints buffer in hexa
 * @dest: char type
 * @src: char type
 * @n: unsigned int type
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;

	for (a = 0 ; n > 0 ; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
