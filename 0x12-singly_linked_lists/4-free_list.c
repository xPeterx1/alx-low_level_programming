#include "lists.h"

/**
 * free_list - Free a list_t list
 * @head: Type pointer struct list_t
 * Return: free head
 */
void free_list(list_t *head)
{
	list_t *tm;

	tm = head;
	while (head != NULL)
	{
		tm = head;
		head = head->next;
		free(tm->str);
		free(tm);
	}
	free(head);
}
