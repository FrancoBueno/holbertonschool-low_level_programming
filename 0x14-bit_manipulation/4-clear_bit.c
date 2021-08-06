#include "main.h"

/**
 *clear_bit - asdajsdj
 *@n: number
 *@index: index
 *Return: 1 , or -1 if i have a error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int nm;

	nm = 1;

	if (*n == '\0')
		return (-1);

	if (index > sizeof(n) * 8)
		return (-1);

	*n = ~*n;
	nm = nm << index;
	*n |= nm;
	*n = ~*n;

	return (1);
}
