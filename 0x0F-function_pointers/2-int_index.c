#include "function_pointers.h"
/**
 * int_index - integral of index
 *@array: array picante
 *@size: Tamaño del array
 *@cmp: funcion del puntero
 *Return: return the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size < 1 || array == NULL || cmp == NULL)
{
return (-1);
}
if (array && cmp)
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
