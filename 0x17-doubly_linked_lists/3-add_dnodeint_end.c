#include "lists.h"
/**
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *newnode, *tmp;

newnode = malloc(sizeof(dlistint_t));
if(!newnode)
return(NULL);
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
newnode->prev = NULL;
*head = newnode;
return (newnode);
}
tmp = *head;
 while (tmp->next != NULL)
   tmp = tmp->next;
 tmp->next = newnode;
 newnode->prev = tmp;
return (newnode);
}
