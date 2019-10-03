#include "holberton.h"

/**
 * *rot13 - check the code for Holberton School students.
 *
 * @s: pointer to an array
 * Return: s
 */

char *rot13(char *s)
{
	int a;
	int b;
	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char let1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; let[b] != '\0'; b++)
		{
			if (s[a] == let[b])
			{
				s[a] = let1[b];
				break;
			}
		}
	}
	return (s);
}
