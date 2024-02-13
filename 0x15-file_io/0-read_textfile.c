#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: type char filename
 * @letters: type size_t letters
 * Return: if cannot be oppened or read 0, if is NULL 0, if writes fail 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t fd;
	char *buffer;
	size_t actualletters;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
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
