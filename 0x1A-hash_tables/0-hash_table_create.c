#include "hash_tables.h"
/**
 * hash_table_create - check the code for
 * @size: the size of the array
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	struct hash_table_s *table;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(struct hash_table_s));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(struct hash_node_s));
	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < table->size; i++)
	{
		table->array[i] =  NULL;
	}
	return (table);
}
