#include "main.h"
#include <stdio.h>
/**
 *get_bit - aosdaos
 *@n: fafsafas
 *@index: indaidsnaa
 *Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (n >> index & 1);
}
