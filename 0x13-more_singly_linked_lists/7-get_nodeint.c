#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *@head: pointer to head
 *@index: index is find linked list
 *Return: Return the nth nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodemy;

	for (nodemy = 0; nodemy < index; nodemy++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
