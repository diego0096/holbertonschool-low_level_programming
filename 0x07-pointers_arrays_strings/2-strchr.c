#include "holberton.h"
/**
 * *_strchr - check the code for Holberton School students.
 *
 * @s: pointer to array
 * @c: char type
 * Return: s
 */
char *_strchr(char *s, char c)
{
	for ( ; s != '\0' ; s++)
	{
		if (*s == c)
			return (s);
	}
	if (c == '\0')
		return (s);
	s = 0;
	return (s);
}
