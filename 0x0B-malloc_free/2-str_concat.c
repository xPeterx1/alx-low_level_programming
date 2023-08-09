#include "main.h"
#include <stdlib.h>
/**
 * str_concat - good
 * @s1: pointer
 * @s2: pointer2
 * Return: d
 */

char *str_concat(char *s1, char *s2)
{
	char *d;
	int i, lenght, j, k;

	if (s1 == NULL && s2 == NULL)
	{	s1 = "";
		s2 = "";
	}
	else if (s1 == NULL && s2 != NULL)
	s1 = "";
	else if (s2 == NULL)
	s2 = "";
	for (lenght = 1, i = 0; i >= 0; lenght++, i++)
	{
		if (*(s1 + i) == '\0')
		{
			for (k = 0; k >= 0; lenght++, k++)
			{
				if (*(s2 + k) == '\0')
				{
					d = malloc(lenght);
					break;
				}
			}		break;
		}
	}
	if (d == NULL)
	return (NULL);
	for (j = 0; j < i; j++)
		d[j] = s1[j];
	for (k = 0; j < lenght; j++, k++)
		d[j] = s2[k];
	return (d);






}
