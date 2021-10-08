#include "hash_tables.h"

/**
 * hash_table_print - function that print table
 * @ht: Hash Table
 * Return: Success
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *newnode = NULL;
	unsigned long int i;
	unsigned long int fl = 0;

	if (ht)
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
		newnode = ht->array[i];

			while (newnode)
			{
				if (fl == 1)
					printf(", ");

				printf("'%s': '%s'", newnode->key, newnode->value);
				fl = 1;
				newnode = newnode->next;
			}
		}
	}
	printf("}\n");
}
