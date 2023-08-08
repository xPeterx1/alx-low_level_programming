#include "main.h"
#include <stdlib.h>
/**
 * create_array - to create an arry
 * @size: size of array
 * @c: the first char
 * Return: a
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size);
	if (a == NULL)
	return (NULL);
	*a = c;
	for (i = 0; i < size; i++)
	{
	a[i] = c;
	}
	return (a);
}
