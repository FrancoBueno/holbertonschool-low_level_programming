#include "lists.h"
/**
 *get_dnodeint_at_index - adoasodsao
 *@head: header
 *@index: position
 *Return: NULL if is Error and node if is Success
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *corr;
unsigned int num = 0;
corr = head;
while (corr)
{
if (num == index)
{
return (corr);
}
num++;
corr = corr->next;
}
return (NULL);
}
