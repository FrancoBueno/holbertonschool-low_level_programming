#include "holberton.h"
/**
 * main - Program that prints Holberton, followed by a new line.
 * Return Always 0
 */
int main(void)
{
char word[] = "Holberton\n";

int index;

for (index = 0; index <= 9; index++)
_putchar(word[index]);

return (0);
}
