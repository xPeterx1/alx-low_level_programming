#include "lists.h"
/**
 * delete_dnodeint_at_index - f
 * @head:3
 * @index: 4
 * Return: 9
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int numofnodes;

	if (head == NULL || (*head) == NULL)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	numofnodes = 0;
	while (tmp != NULL)
	{
		if (numofnodes == index)
		{
			if (tmp->next != NULL)
			{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
			}

		else
		{
			tmp->prev->next = NULL;
			free(tmp);
			return (1);
		}
		}
		tmp = tmp->next;
		numofnodes++;
	}
	return (-1);
}
