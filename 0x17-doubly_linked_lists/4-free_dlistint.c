#include "lists.h"
/**
 * free_dlistint - g
 * @head: e
 * Return: r
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *holder;

	tmp = head;
	while (tmp != NULL)
	{
		holder = tmp->next;
		free(tmp);
		tmp = holder;

	}





}
