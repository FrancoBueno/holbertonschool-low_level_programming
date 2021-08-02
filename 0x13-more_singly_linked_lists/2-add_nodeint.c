#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *add_nodeint - function that print a list
 *@head: header of the list
 *Return: always sucess (0)
 *@n: pointer save
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
