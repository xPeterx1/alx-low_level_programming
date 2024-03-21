#include "lists.h"
/**
 * print_dlistint - yes
 * @h: hellp
 * Return: n
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	int numofnodes;

	if (h == NULL)
	{
		return (1);
	}
	tmp = h;
	numofnodes = 0;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		numofnodes++;
	}
	return (numofnodes);





}
