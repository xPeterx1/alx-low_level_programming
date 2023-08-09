#include "main.h"
#include <stdlib.h>
/**
 * _strdup - goog
 * @str: pointer
 * Return: d
 */

char *_strdup(char *str)
{
	char *d;
	int lenght;
	int i;
	int j;

	if (str == NULL)
	return (NULL);
	for (lenght = 1, i = 0; i >= 0; lenght++, i++)
	{
		if (*(str + i) == '\0')
		{
		d = malloc(lenght);
		break;
		}

	}
	if (d == NULL)
	return (NULL);

	for (j = 0; j < lenght; j++)
	{
		d[j] = str[j];
	}
	return (d);






}
