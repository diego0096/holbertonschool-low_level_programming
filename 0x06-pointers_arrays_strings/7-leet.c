#include "holberton.h"
/**
 * *leet - replace letters with numbers
 * @s: pointer to an array
 *
 * Return: s
 */
char *leet(char *s)
{
	int a, b;
	char let[] = "aeotl";
	char let1[] = "AEOTL";
	char num[] = "43071";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; let[b] !=  '\0' && let1[b] != '\0'; b++)
		{
			if (s[a] == let[b] || s[a] == let1[b])
			{
				s[a] = num[b];
			}
		}
	}
	return (s);
}
