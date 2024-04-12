#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key of the value to retrieve
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current == NULL)
	{
	return (NULL);
	}
	if (strcmp(key, current->key) == 0)
	{
		return (current->value);
	}
	else
	{

		if (current->next == NULL)
		{
			return (NULL);
		}
		else
		{
			while (current != NULL)
			{
			if (strcmp(key, current->key) == 0)
			{
				return (current->value);
			}
			current = current->next;
			}
			return (NULL);
		}
	}
	return (NULL);
}
