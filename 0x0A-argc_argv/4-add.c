#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program to multiply two numbers
 * @argc: size of argv array and number of command line arguments
 * @argv: array of size argc
 * Return: always successful
 */
int main(int argc, char *argv[])
{
	int a, b, sum;

	sum = 0;
	if (argc < 1)
	{
		printf("0");
	}
	for (a = 1 ; a < argc ; a++)
	{
		sum += atoi(argv[a]);
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!(isdigit(argv[a][b])))
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
