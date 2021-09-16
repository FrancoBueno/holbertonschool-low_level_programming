#include <stdlib.h>
#include "lists.h"
/**
 *free_dlistint - ASDASDOa
 *@head: heder
 *Return:suceess
 */

void free_dlistint(dlistint_t *head)
{
if (head)
{
free_dlistint(head->next);
free(head);
}
}
