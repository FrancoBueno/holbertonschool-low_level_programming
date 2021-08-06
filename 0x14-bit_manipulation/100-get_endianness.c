#include "main.h"

/**
 *get_endiannes - chekeo los endiannes 
 *Return: 0 if is big the endian , 1 if is little little the endian.
 */
int get_endianness(void)
{
	int number = 1;

	if (*(char *)&number == 1)
		return (1);
	else
		return (0);
}
