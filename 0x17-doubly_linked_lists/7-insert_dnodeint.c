#include "lists.h"
/**
 * insert_dnodeint_at_index - f
 * @h:3
 * @idx: 4
 * @n: 5
 * Return: 9
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *newnode;
	unsigned int numofnodes;

	if (h == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	tmp = *h;
	numofnodes = 0;
	while (tmp != NULL)
	{
		if (numofnodes == idx)
		{
			newnode->next = tmp;
			(tmp->prev)->next = newnode;
			newnode->prev = tmp->prev;
			tmp->prev = newnode;
			return (newnode);
		}
		tmp = tmp->next;
		numofnodes++;
	}
	return (NULL);
}
