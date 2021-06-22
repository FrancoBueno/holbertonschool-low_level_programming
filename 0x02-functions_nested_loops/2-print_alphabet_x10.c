#include "holberton.h"

/**
 *print_alphabet_x10 - print alphabet x10 in loop
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
int loop;
char print10 = 'a';
 
for (loop = 1; loop <= 10 ; loop++)
{
for (print10 = 'a'; print10 <= 'z'; print10++)
{
_putchar(print10);
 }
_putchar('\n');
}
}
