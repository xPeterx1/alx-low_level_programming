#include "lists.h"
/**
 * add_dnodeint - m
 * @head: h
 * @n: s
 * Return: 1
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	newnode->n  = n;
	newnode->prev = NULL;
	if (newnode == NULL)
	{
		free(head);
		return (NULL);
	}
	if (head == NULL)
	{
		return (NULL);

	}
	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;

	}

	else
	{
		newnode->next = *(head);
		(*head)->prev = newnode;
		*(head) = newnode;

	}
	return (newnode);

}
