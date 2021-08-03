#include "lists.h"
#include <stdlib.h>
/**
 *free_listint - free listint
 *@head: heder
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
