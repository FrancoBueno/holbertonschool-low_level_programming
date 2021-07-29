#include "lists.h"
#include <string.h>
/**
 * free_list - free memory
 * @head: pointer to type list_t
 */
void free_list(list_t *head)
{
	list_t *nd;

	while (head != NULL)
	{
		nd = head;
		head = nd->next;
		free(nd->str);
		free(nd);
	}
}
