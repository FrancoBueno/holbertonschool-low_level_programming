#include "holberton.h"
#include <stdio.h>
/**
 *_strlen_recursion - Entry point
 *Return: Always 0 (success)
 *@s :string
 */
int _strlen_recursion(char *s)
{
int a = 0;
if (*s == '\0')
{
return (0);
}
a++;
a = _strlen_recursion(s + a) + 1;
return (a);
}
