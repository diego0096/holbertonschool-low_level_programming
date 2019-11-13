#include "holberton.h"
/**
 * read_textfile - function to read and write a file
 * @filename: const char type pointer to a file
 * @letters: size_t type
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fsd;
	ssize_t fread, fwrite, fclose;
	char *space;

	if (filename == NULL)
		return (0);
	space = malloc(sizeof(char) * letters);
	if (space == NULL)
	{
		return (-1);
	}
	fsd = open(filename, O_RDONLY);
	if (fsd == -1)
		return (0);
	fread = read(fsd, space, letters);
	if (fread == -1)
		return (-1);
	fwrite = write(STDOUT_FILENO, space, fread);
	if (fwrite == -1)
		return (-1);
	fclose = close(fsd);
	if (fclose == -1)
		return (-1);
	return (fread);
}
