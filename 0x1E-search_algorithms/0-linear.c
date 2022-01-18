#include "search_algos.h"
/**
 *linear_search - search the value with the method Linear search
 *@array: numbers in array
 *@size: size of the array
 *@value: number to search
 *Return: return index if is success or if is fail -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);

}
