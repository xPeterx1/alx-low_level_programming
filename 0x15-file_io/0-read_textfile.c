#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: type char filename
 * @letters: type size_t letters
 * Return: if cannot be oppened or read 0, if is NULL 0, if writes fail 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}
	int fd = 0;
	char *buffer = malloc(sizeof(char) * letters);
	int actualletters;

	if (buffer == NULL)
	{
	free(buffer);
	return (-1);
	}

	fd = open(filename, O_RDONLY);

	read(fd, buffer, letters);

	actualletters = write(STDOUT_FILENO, buffer, letters);
	if (actualletters != letters)
	{
	free(buffer);
	return (0);
	}
	free(buffer);
	close(fd);
	return (actualletters);

}
