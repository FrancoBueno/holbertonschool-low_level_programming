#include "holberton.h"
#include <stdio.h>
/**
 *_puts_recursion - Entry point
 *Return always 0 (Success)
 *@s:char
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar ('\n');

else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
