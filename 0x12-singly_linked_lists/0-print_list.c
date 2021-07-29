#include "lists.h"
#include <stdio.h>
/**
 * print_list - print the element in the screen
 * @h: headd
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
  int i = 0;


  while (h != NULL)
    {
      if (h->str != NULL)
	printf("[%d] %s\n", h->len, h->str);
      else
	printf("[0] (nil)\n");
      i++;
      h = h->next;
    }
  return (i);
}
