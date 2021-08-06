#include "main.h"

/**
 *set_bit - asdafias
 *@n: number
 *@index: jkdhajdah
 *Return: saodasdj
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mn;

	if (index > 64)
		return (-1);

	for (mn = 1; index > 0; index--, mn *= 2)
		;
	*n += mn;

	return (1);
}
