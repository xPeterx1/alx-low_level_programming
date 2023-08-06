#include <stdio.h>

/**
 * main - print p name
 * @argc: arg count
 * @argv : aray of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	(void)argc;
	for (i = 0; argv[i] != NULL; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}
