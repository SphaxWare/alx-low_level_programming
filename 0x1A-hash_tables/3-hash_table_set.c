#include "hash_tables.h"
/**
 * hash_table_set - check the code
 * @key:key
 * @ht:hashtable
 * @value: value
 * Return: 0 or 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *temp;

	if (key == NULL || ht == NULL || key == "")
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup((char *)key);
	node->value = strdup((char *)value);
	node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		temp = ht->array[index];
		if (strcmp(temp->key, key) == 0)
		{
			node->next = temp->next;
			ht->array[index] = node;
			free_hash_node(temp);
			return (1);
		}
		while (temp->next != NULL && strcmp(temp->next->key, key) != 0)
			temp = temp->next;
		if (strcmp(temp->key, key) == 0)
		{
			node->next = temp->next->next;
			free_hash_node(temp->next);
			temp->next = node;
		}
		else
		{
			node->next = ht->array[index];
			ht->array[index] = node;
		}
	}
	return (1);
}
/**
 * free_hash_node - Free a hash table node.
 * @node: Node to free.
 *
 * Return: Void.
 */
void free_hash_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
