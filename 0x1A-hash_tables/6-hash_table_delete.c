
#include "hash_tables.h"

/**
 * free_list - frees a linked list
 * @head: hash_node_t list to be freed
 * Return: 1
 **/
void free_list(hash_node_t *head)
{
    hash_node_t *tmp;
    hash_node_t *next;

    tmp = head;

    while (tmp != NULL)
    {
        next = tmp->next;
        free(tmp->key);
        free(tmp->value);
        free(tmp);
        tmp = next;
    }
}


/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int index;

	index = 0;

	while (index < ht->size)
	{
	current = ht->array[index];
	if (current == NULL)
	{
		continue;
	}
	free_list(current);
	index++;
	}
	free(ht->array);
	free(ht);
}
