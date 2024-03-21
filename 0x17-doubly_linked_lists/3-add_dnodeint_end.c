#include "lists.h"
/**
 * add_dnodeint_end - m
 * @head: h
 * @n: s
 * Return: 1
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *tmp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		free(head);
		return (NULL);
	}

	if (head == NULL)
	{
		return (NULL);

	}
	newnode->n  = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;

	}
	else
	{
		tmp = (*head);
		while (1)
		{
			if (tmp->next == NULL)
			{
				tmp->next = newnode;
				newnode->prev = tmp;
				break;
			}
			tmp = tmp->next;
		}
	}

	return (newnode);
}
