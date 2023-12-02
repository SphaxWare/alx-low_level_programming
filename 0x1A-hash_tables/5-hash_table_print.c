#include "hash_tables.h"
/**
 * hash_table_print - check the code
 * @ht: a hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (flag == 0)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				flag = 0;
				node = node->next;
			}
		}
	}
	printf("}\n");
}
