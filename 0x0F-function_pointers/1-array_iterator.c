#include <stddef.h>
#include "function_pointers.h"
/**
 *
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int a;
for (a = 0 ; a < (int)size; a++)
action(*(array + a));
}
