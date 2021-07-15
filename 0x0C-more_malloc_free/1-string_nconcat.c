#include "holberton.h"
#include <stdlib.h>
/**
* string_nconcat - entry point
* @s1: string 1
* @s2: string 2
* @n: bytes .
* Return: Nothing.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int f, l, k;
	char *p;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";
f = 0;
while (s1[f])
f++;

p = malloc(sizeof(*p) * f + n + 1);

if (p == NULL)
return (NULL);

for (l = 0, k = 0; l < (l + n); l++)
{
if (l < f)
{
p[l] = s1[l];
}
else
{
p[l] = s2[k++];
}
}
p[l] = '\0';
return (p);
}
