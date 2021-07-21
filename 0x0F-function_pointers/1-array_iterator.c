#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - entry point point point poin
 *@array: el arrai es el arrai
 *@size: tamaño piola
 *@action: action peli
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a;

if (array && action && size > 0)

for (a = 0; a < size; a++)
action(array[a]);
}
