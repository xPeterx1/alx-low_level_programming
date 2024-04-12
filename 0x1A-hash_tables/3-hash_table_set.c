#include "hash_tables.h"
/**
 * hash_table_set- a
 * @ht: b
 * @key: c
 * @value: d
 * Return: v
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item;
	hash_node_t *current;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	item = create_item(key, value);
	if (item == NULL)
	return (0);
	index = hash_djb2((const unsigned char *) key) % ht->size;
	if (index >= ht->size)
	{
		return (0);
	}
	current = ht->array[index];
	if (current == NULL)
	{
		ht->array[index] = item;
	}

	else
	{
		if (strcmp(current->key, key) == 0)
		{
			strcpy(current->value, value);
		}
		else
		{
			add_item(current, item);
		}
	}
	return (1);

}

/**
 * create_item-ff
 * @key: 1
 * @value: 2
 * Return:4
*/
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (item == NULL)
	return (NULL);
	item->key = malloc(strlen(key) + 1);
	if (item->key == NULL)
	{
		free((void *)item);
		return (NULL);
	}
	item->value = malloc(strlen(value) + 1);
	if (item->value == NULL)
	{
		free((void *)item);
		free((void *)key);
		return (NULL);
	}
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}
/**
 * add_item-t
 * @head:3
 * @item: 4
 * Return:5
*/
void add_item(hash_node_t *head, hash_node_t *item)
{

	if (head->next == NULL)
	{
		head->next = item;

	}
	else
	{
		item->next = head->next;
		head->next = item;
	}
}
