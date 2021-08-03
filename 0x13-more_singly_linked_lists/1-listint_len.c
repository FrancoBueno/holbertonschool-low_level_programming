#include "lists.h"
#include <stdio.h>
/**
 *listint_len - print amount of elemnts
 *Return: amount de elements (f)
 *@h: Header
 */
size_t listint_len(const listint_t *h)
{
	size_t f = 0;

	while (h != NULL)
		h = h->next;
	f++;
	return (f);
}
