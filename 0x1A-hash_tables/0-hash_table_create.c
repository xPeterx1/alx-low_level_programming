#include "hash_tables.h"
/**
 * hash_table_create - ok
 * @size: done
 * Return: ok
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tmp;
	unsigned long i;

	if (size <= 0)
	{
		return (NULL);
	}
	tmp = malloc(sizeof(hash_table_t));
	if (!tmp)
	{
		return (NULL);
	}
	tmp->array = malloc(((int) size) * sizeof(hash_node_t *));
	if (!(tmp->array))
	{
		return (NULL);
	}
	tmp->size = size;
	for (i = 0; i < tmp->size; i++)
		tmp->array[i] = NULL;
	return (tmp);
}
