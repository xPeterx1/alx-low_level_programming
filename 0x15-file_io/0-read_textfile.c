#include "main.h"


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
