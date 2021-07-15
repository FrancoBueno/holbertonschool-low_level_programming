#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - entry point
 * f: is a pointer
 * Return: f
 * @b: size of bytes requires of malloc
 */

void *malloc_checked(unsigned int b)
{
char *f = NULL;

f = malloc(b);

if (f == NULL)
{
exit(98);
}
return (f);
}
