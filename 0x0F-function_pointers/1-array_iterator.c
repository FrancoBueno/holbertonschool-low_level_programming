#include <stddef.h>
#include "function_pointers.h"
/**
 *
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a;

if (array && action && size > 0)

for (a = 0; a < size; a++)
action(array[a]);
}
