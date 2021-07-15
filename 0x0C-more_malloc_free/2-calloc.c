#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - call
 *@nmemb: size the array
 *@size: size the type
 * Return: a pointer to an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *array = NULL;
unsigned int i;
unsigned int q;
char *e;

if (size == 0 || nmemb == 0)
return (NULL);
q = nmemb * size;
array = malloc(q);
e = (char *)array;
if (e != NULL)
{
for (i = 0; i < q; i++)
e[i] = 0;
return (e);
}
return (NULL);
}
