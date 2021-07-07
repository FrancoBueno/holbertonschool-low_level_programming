#include "holberton.h"
#include <stdio.h>
/**
 *_print_rev_recursion - Entry point
 *return: Always 0 (Success)
 *@s:char
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
 else
_print_rev_recursion(s + 1);
_putchar(*s);
}
