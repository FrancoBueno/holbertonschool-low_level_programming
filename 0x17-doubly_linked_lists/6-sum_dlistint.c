#include "lists.h"
#include <stdlib.h>
/**
 *sum_dlistint - Adoadsoaso
 *@head: asodaosdaos
 *Return:Asadaosdoasd
 */
int sum_dlistint(dlistint_t *head)
{
int suma = 0;

if (!head)
return (0);
while (head)
{
suma += head->n;
head = head->next;
}
return (suma);
}
