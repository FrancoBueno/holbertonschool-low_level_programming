#include "holberton.h"
/**
 * main - Entry Point
 * return Always 0 (success)
 * Write a program that prints Holberton, followed by a new line.
 */
int main(void)
{
char word[] = "Holberton\n";

int index;

 for (index = 0; index <= 9; index++)
_putchar(word[index]);

return(0);
}
