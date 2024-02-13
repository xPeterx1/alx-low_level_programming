#include "main.h"
/**
 * create_file - Function that creates a file
 * @filename: type char filename pointer of FD
 * @text_content: type char pointer of char
 * Return: -1 if NULL in FN, 1 on sucess
 */
int create_file(const char *filename, char *text_content)
{
int fd, wr, count, temp;

if (filename == NULL)
{
	return (-1);
}
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
{
	return (-1);
}

if (text_content == NULL)
{
	return (1);
}
else
{
	for (count = 0; *(text_content + count) != '\0'; count++)
	{
	temp++;
	}
	wr = write(fd, text_content, sizeof(char) * (count + 1));
	if (wr == -1)
	{
		return (-1);
	}
}

	return (1);

}
