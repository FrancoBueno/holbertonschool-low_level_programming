#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of program
 * Description: if rename the program, it will print the name
 * without compiling
 * Return: the name, EXIT
 */

int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);
return 0;
}
