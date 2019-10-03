#include "holberton.h"
/**
 * *cap_string - capitalize words
 * @s: pointer to an array
 *
 * Return: Return capitalized words
 */

char *cap_string(char *s)
{
	int a;
	int b;

	char spa[13]  = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
	 '(', ')', '{', '}'};

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; spa[b] != '\0'; b++)
		{
			if (a == 0)
			{
				if (s[a]  >= 'a' && s[a] <= 'z')
				{
					s[a] = s[a] - 32;
				}
			}
			if (s[a] == spa[b])
			{
				if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
				{
					s[a + 1] = s[a + 1] - 32;
				}
			}
		}
	}
	return (s);
}
