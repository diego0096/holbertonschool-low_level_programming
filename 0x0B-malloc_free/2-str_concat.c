#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two string
 * @s1: char type
 * @s2: char type
 *
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
unsigned int a, b, size;
char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0 ; s1[a] != '\0' ; a++)
	;
	for (b = 0 ; s2[b] != '\0' ; b++)
	size = a + b + 1;
	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < size; b++)
		if (*s1 != '\0')
		{
			s[b] = *(s1++);
		}
		else
			s[b] = *(s2++);

	return (s);
}
