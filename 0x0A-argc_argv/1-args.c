#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description : print a number , followed by a new line  
 * Return success 0
 * @argv: array
 * @argc: array
 */
int main(int argc, char *argv[])
{
(void) *argv;
printf("%d\n", argc -1);
return argc;
}
