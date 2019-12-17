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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	s = 0;
	return (s);
}
