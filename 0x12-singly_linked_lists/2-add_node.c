#include "lists.h"

/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: Always 0.
 */
int _strlen(const char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);

}

/**
 * *add_node - Return the number of elements in a linked list
 * @head: data type poointer of struct node
 * @str: data type pointer of struct
* Return: elements of the str i
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_nod;

	n_nod = malloc(sizeof(list_t));

	if (n_nod == NULL)
		return (NULL);

	n_nod->str = strdup(str);
	n_nod->len = _strlen(str);
	n_nod->next = *head;
	*head = n_nod;

	return (n_nod);
}
