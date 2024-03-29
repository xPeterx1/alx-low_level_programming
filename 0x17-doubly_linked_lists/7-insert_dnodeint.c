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

	if (h == NULL || (*h == NULL && idx > 0))
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
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
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
		if (numofnodes == idx)
		{
			return (add_dnodeint_end(h, n));
		}
	return (NULL);
}
