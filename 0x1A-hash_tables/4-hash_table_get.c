#include "hash_tables.h"
/**
 * hash_table_get - check the code
 * @ht: hash table
 * @key: key
 * Return: value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *find;

	if (key == NULL || ht == NULL || strcmp(key, "") == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	find = ht->array[index];
	if (strcmp(find->key, key) == 0)
		return (find->value);
	while (find->next != NULL)
	{
		if (strcmp(find->key, key) == 0)
			return (find->value);
		find = find->next;
	}
	return (NULL);
}
