#include "lists.h"
/**
 *add_dnodeint - asdoasdoaso
 *@n: infoopro
 *@head: Heder:D
 *Return: Successpoint
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;

if (!head)
return (NULL);
newnode = malloc(sizeof(dlistint_t));
if (!newnode)
return (NULL);
newnode->n = n;
newnode->prev = NULL;
newnode->next = *head;
if (*head)
(*head)->prev = newnode;
*head = newnode;
return (newnode);
}
