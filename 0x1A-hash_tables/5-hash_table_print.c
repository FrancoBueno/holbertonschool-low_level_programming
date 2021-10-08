#include "hash_tables.h"

/**
 * hash_table_print - function that print table
 * @ht: Hash Table
 * Return: Success
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int coma = 0;
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
		 	tmp = ht->array[i];

			while (tmp)
			{
				if (coma == 1)
					printf(", ");

				printf("'%s' : '%s'", tmp->key, tmp->value);
				coma = 1;
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}


