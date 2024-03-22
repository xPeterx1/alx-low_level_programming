#include "lists.h"
/**
 * sum_dlistint - sum
 * @head: 3
 * Return: 4
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	tmp = head;
	sum = 0;
	while (tmp != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}

	return (sum);

}
