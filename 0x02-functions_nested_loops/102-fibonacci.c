#include "stdio.h"
/**
 * main - the first 50 number
 *
 * fibobnachi numbers starting from one
 * Return: 0
 */
int main(void)
{
	long int a  = 0;
	long int b  = 1;
	long int c;
	int count = 1;

	while (count <= 50)
	{
	c = b + a;
	count++;
	printf("%ld", c);
	if (count <= 50)
	printf(", ");
	a = b;
	b = c;
	}
	printf("\n");
	return (0);
}
