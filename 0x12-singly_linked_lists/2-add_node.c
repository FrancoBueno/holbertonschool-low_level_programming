#include "lists.h"
#include <stdio.h>
/**
 *
 */
unsigned int _stringlength(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++);

	return (i);
}





/**
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *table;
	if (str == NULL)
		return (NULL);
	table = malloc(sizeof(list_t));
	if (table == NULL)
		return (NULL);
			if (table->str == NULL)
			{
				free(table);
				return (NULL);
			}
	table->len = _stringlength(table->str);
	table->next = *head;
	return (table);
}
