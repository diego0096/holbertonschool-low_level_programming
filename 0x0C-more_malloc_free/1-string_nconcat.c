#include <stdlib.h>
#include <stdio.h>
/**
 * *string_nconcat - check the code for Holberton School students.
 *
 * @s1: destination for concatnation
 * @s2: source of string
 * @n: int type for size of byte
 * Return: A pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int c1, c2;
	int l1, l2;
	char *a;
	int p = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0 ; s1[l1] != '\0' ; l1++)
		;
	for (l2 = 0 ; s2[l2] != '\0' ; l2++)
		;
	if (p >= l2)
	{
		p = l2;
		a = malloc(sizeof(char) * (l1 + l2 + 1));
	}
	else
	{
		a = malloc(sizeof(char) * (l1 + n + 1));
	}
	if (a == NULL)
		return (NULL);
	for (c1 = 0 ; c1 < l1 ; c1++)
	{
		a[c1] = s1[c1];
	}
	for (c2 = 0 ; c2 <  p ; c2++)
	{
		a[c1++] = s2[c2];
	}
	a[c1++] = '\0';
	return (a);
}
