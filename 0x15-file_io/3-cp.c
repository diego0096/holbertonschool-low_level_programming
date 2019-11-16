#include "holberton.h"
#define BUFSIZE 1024
/**
 * main - C program that copied file content from one to another.
 *
 * @argc: size of array argv and number of command line arguments
 * @argv: n array  of size argc
 * Return: Always successful
 */
int main(int argc, char *argv[])
{
	int file1, file2, rd, rt;
	char buffer[1024];

	rt = 1;
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file1 file2\n"),
			exit(97);
	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	if (argv[2] == NULL)
		dprintf(STDERR_FILENO, "Erro\r: Can't write to file %s\n", argv[2]),
			exit(99);
	file1 = open(argv[1], O_RDONLY);
	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
		       S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	rd = read(file1, buffer, BUFSIZE);
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	while (rd != 0)
	{
		rt = write(file2, buffer, rd);
		if (rt == -1 || rt != rd)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		rd = read(file1, buffer, BUFSIZE);
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
				exit(98);
	}
	rt = close(file1);
	if (rt == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1), exit(100);
	rt = close(file2);
	if (rt == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2), exit(100);
	return (0);
}
