#include "main.h"

/**
 *flip_bits - asidasdjiasd
 *@n: number
 *@m: change num
 *Return: number de bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nm;
	unsigned long int count;

	nm = 0;
	count = 0;

	nm = n ^ m;

	while (nm > 0)
	{
		if (nm & 1)
			nm++;
		nm >>= 1;
	}
	return (count);
}
