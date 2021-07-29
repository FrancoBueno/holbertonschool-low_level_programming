#include "lists.h"
#include <stdio.h>
/**
 *
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
