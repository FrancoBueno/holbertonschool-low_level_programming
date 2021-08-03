#include "lists.h"

/**
 *insert_nodeint_at_index - insert a new node
 *@head: address
 *@idx: index
 *@n: value of node
 *Return: address new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodeop;
	listint_t *nodenew;
	unsigned int nodo = 0;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	nodenew = malloc(sizeof(listint_t));
	if (nodenew == NULL)
		return (NULL);
	nodenew->n = n;
	nodeop = *head;
	while (nodeop != NULL)
	{
		nodo++;
		nodeop = nodeop->next;
	}

	if (nodo < idx)
	{
		free(nodenew);
		return (NULL);
	}

	nodeop = *head;
	if (count == idx)
	{
		nodenew->next = *head;
		*head = nodenew;
		return (*head);
	}
	while (count != idx - 1)
	{
		nodeop = nodeop->next;
		count++;
	}
	nodenew->next = nodeop->next;
	nodeop->next = nodenew;
	return (nodenew);
}
