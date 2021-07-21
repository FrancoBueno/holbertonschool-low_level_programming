#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - function of print name of the char
 *@name: array de nombre
 *@f: puntero de name
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
