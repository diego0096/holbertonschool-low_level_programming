#include "holberton.h"
/**
 * read_textfile - function to read and write a file
 * @filename: const char type pointer to a file
 * @letters: size_t type
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t frd, fwr, fcl;
	char *space;

	if (filename == NULL)
		return (0);
	space = malloc(sizeof(char) * letters);
	if (space == NULL)
	{
		return (-1);
	}
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	frd = read(f, space, letters);
	if (frd == -1)
		return (-1);
	fwr = write(STDOUT_FILENO, space, frd);
	if (fwr == -1)
		return (-1);
	fcl = close(f);
	if (fcl == -1)
		return (-1);
	return (frd);
}
