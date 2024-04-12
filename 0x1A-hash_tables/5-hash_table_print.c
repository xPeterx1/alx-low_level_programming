
#include "hash_tables.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the hash_node_t list to print
 **/
void print_list(hash_node_t *h)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (h != NULL)
	{
		j++;
		if (j >= 1)
		{
		printf(", ");
		}
		printf("'%s': '%s'", h->key, h->value);
		h = h->next;
		i++;
	}
}

/**
 * hash_table_print - good
 * @ht: good
 * Return: 11
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	int j;

	j = -1;
	if (ht == NULL)
	return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{

		if (ht->array[i])
		{
			j++;
			current = ht->array[i];
			if (j >= 1)
			{
			printf(", ");
			}
			if (current->next == NULL)
			{
				printf("'%s': '%s'", current->key, current->value);
			}
			else
			{
				print_list(current);
			}
		}
	}
	printf("}\n");
}
