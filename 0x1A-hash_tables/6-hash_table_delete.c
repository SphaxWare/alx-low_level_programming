#include "hash_tables.h"
/**
 * hash_table_delete - check the code
 * @ht: hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			free_hash_node(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
