#include "lists.h"

/**
 * free_listint2 - free list two
 * @head: header
 *
 * Description: blabla
 */
void free_listint2(listint_t **head)
{
	listint_t *pim;

	if (head == NULL)
		return;

	while (*head)
	{
		pim = (*head)->next;
		free(*head);
		*head = pim;
	}

	head = NULL;
}
