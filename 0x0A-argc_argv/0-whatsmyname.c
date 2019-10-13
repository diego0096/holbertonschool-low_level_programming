#include <stdio.h>
/**
 * main - program to print name of program
 * @argc: size of argv array and number of command line arguments
 * @argv: array of size argc
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
