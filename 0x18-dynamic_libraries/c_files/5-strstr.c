#include "holberton.h"
/**
 * *_strstr - check the code for Holberton School students.
 *
 * @haystack: pointer to an array
 * @needle: pointer to an array
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	const char *a, *b;

	if (!haystack || !needle)
		return (0);
	if (!*needle)
		return ((char *)haystack);
	for ( ; *haystack ; haystack++)
	{
		if (*haystack == *needle)
		{
			b = haystack;
			a = needle;
			for ( ; *b ; a++, b++)
			{
				if (*b != *a)
					break;
			}
			if (!*a)
				return ((char *)haystack);
		}
	}
	return (0);
}
