#include "hash_tables.h"

/**
 * hash_table_print - function that print table
 * @ht: Hash Table
 * Return: Success
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned char coma = 0;
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (coma == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s' : '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			coma = 1;
		}
	}
	printf("}\n");
}


