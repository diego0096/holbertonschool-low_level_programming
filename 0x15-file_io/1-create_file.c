#include "holberton.h"

/**
 * create_file - Function that creates a file.
 * @filename: name of the file to create.
 * @text_content: Is a string to write.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f, len, fwr;

	f = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (f == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}
	fwr = write(f, text_content, len);
	if (fwr == -1)
		return (-1);
	close(f);
	return (1);
}
