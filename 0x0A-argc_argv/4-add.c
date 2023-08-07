#include <stdio.h>
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
	char *c = 0;

	while (i < argc)
	{
		for (c = argv[i]; *c ; c++)
		{
			if (*c < '0' || *c > '9')
			{
			printf("Error\n");
			return (1);
			}
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%i\n", sum);
	return (0);
}
