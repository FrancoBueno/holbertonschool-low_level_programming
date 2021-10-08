#include "hash_tables.h"

/**
 * hash_table_print - function that print table
 * @ht: Hash Table
 * Return: Success
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int coma = 0;
	unsigned long int i;
	hash_node_t *node;

	i = 0;
	if (ht == NULL)
		return;

	printf("{");
	while(i < ht->size)
	{
		node = ht->array[i];
		
		while (node)
			{
				if (coma == 1)
					printf(", ");

				printf("'%s' : '%s'", node->key, node->value);
				coma = 1;
				node = node->next;
			}
			i++;
		
	}
	printf("}\n");
}


