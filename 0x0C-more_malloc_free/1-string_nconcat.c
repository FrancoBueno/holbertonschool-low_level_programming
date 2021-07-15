#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: string 1.
 * @s2: string 2.
 * @n: The maximum number of bytes
 *
 * Return: NULL fail, else pointer to malloc memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int len = n, i;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i]; i++)
len++;

p = malloc(sizeof(char) * (len + 1));

if (p == NULL)
return (NULL);

len = 0;

for (i = 0; s1[i]; i++)
p[len++] = s1[i];

for (i = 0; s2[i] && i < n; i++)
p[len++] = s2[i];

p[len] = '\0';

return (p);
}
