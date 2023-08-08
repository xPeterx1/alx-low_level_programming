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

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size);
	if (a == NULL)
	return (NULL);
	*a = c;
	return (a);
}