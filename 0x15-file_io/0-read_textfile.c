#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: type char filename
 * @letters: type size_t letters
 * Return: if cannot be oppened or read 0, if is NULL 0, if writes fail 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t actualletters;
	ssize_t readcheck;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
	return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	readcheck = read(fd, buffer, letters);
	if (readcheck == -1)
	{
	free(buffer);
	close(fd);
	return (0);
	}
	close(fd);
	actualletters = write(STDOUT_FILENO, buffer, letters);
	if (actualletters != letters)
	{
	free(buffer);
	return (0);
	}
	free(buffer);
	return (actualletters);

}
