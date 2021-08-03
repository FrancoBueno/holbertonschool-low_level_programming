#include "lists.h"

/**
 *sum_listint - returns the sum of all the data of a linked list
 *@head: adddress
 *Return: sum the linked list
 */
int sum_listint(listint_t *head)
{
	int more;
	listint_t *lst;

	more = 0;
	lst = head;

	while (lst != NULL)
	{
		more += lst->n;
		lst = lst->next;
	}
	return (more);
}
