#include "lists.h"
/**
 * get_dnodeint_at_index - g
 * @head: k
 * @index: f
 * Return: v
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int numofnodes;

	if (head == NULL)
	{
		return (NULL);
	}

	tmp = head;
	numofnodes = 0;
	while (tmp != NULL)
	{
		if (numofnodes == index)
		{
			return (tmp);

		}
		tmp = tmp->next;
		numofnodes++;
	}

	return (NULL);
}
