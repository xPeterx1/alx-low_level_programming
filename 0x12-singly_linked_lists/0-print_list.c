#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list
 * @h: data type pointer of struct
 * Return: elements of the str index
 */

size_t print_list(const list_t *h)
{
	size_t ind;
	const list_t *tmp;

	ind = 0;
	tmp = h;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			tmp = tmp->next;
			ind++;
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
			tmp = tmp->next;
			ind++;
		}
	}
	return (ind);
}
