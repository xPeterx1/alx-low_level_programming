#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - print some of arg
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		if (isdigit(*argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%i\n", sum);
	return (0);
}
