#include "hash_tables.h"

/**
 *hash_table_get - Fucntion thaht print value and key
 *@ht: hash thable
 *@key: NameNAme
 *Return: success Print
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	if (ht->array[i] == NULL)
		return (NULL);

	node = ht->array[i];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
