#include "hash_tables.h"

/**
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *newnode = NULL;
	unsigned long int a;

	if (ht)
	{
		for (a = 0; a < ht->size; a++)
		{
			if (ht->array[a])
			{
				while (ht->array[a])
				{
					newnode = ht->array[a]->next;
					free(ht->array[a]->key);
					free(ht->array[a]->value);
					free(ht->array[a]);
					ht->array[a] = newnode;
				}
				free(ht->array[a]);
			}
		}
		free(ht);
		free(ht->array);
	}
}
