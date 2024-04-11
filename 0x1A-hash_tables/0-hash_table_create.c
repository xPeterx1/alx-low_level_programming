#include "hash_tables.h"
/**
 * hash_table_create - ok
 * @size: done
 * Return: ok
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tmp;
	int i;

	if (size <= 0)
	{
		return (NULL);
	}
	tmp = malloc(sizeof(hash_table_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->array = calloc(size, sizeof(hash_node_t *));
	if (tmp->array == NULL)
	{
		return (NULL);
	}
	tmp->size = size;
	return (tmp);
}
