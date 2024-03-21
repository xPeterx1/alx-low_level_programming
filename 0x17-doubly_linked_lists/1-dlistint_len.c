#include "lists.h"
/**
 * dlistint_len - yes
 * @h: hellp
 * Return: n
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	int numofnodes;

	tmp = h;
	numofnodes = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		numofnodes++;
	}
	return (numofnodes);
}
