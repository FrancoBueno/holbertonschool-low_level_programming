#include "lists.h"

/**
  *pop_listint - deleted head node of a listint_t list
  *@head: addresss
  *Return: head
  */

int pop_listint(listint_t **head)
{
	listint_t *lilist;
	int f;

	if (*head == NULL)
		return (0);

	list = *head;
	f = (*head)->n;
	*head = (*head)->next;

	free(lilist);

	return (f);
}
