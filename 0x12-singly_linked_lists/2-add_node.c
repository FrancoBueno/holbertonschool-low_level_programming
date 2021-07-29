#include "lists.h"
#include <string.h>
/**
 *
 */
int _stringlength(char *s)
{
	int i;

	for (i = 0; s[i]; i++);

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
	*head = table;
	return (table);
}
