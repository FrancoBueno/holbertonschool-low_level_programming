#include "lists.h"
#include <stdio.h>
/**
 *list_len - Return the number of elements of list_t
 *@h: variable pointer to struct
 *Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
int a = 0;

while (h != NULL)
{
a++;
h = h->next;
}
return (a);
}
