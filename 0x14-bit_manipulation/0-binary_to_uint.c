#include "main.h"
#include <stdio.h>
/**
 *binary_to_uint - convert to a binary number to unsigned integral
 *@b: pointer to string
 *Return: number unsigned
 */

unsigned int binary_to_uint(const char *b)
{
	int strlen;
	unsigned int l;
	unsigned int a;

	if (b == NULL)
		return (0);

	for (strlen = 0; b[strlen]; strlen++)
	{
		if (b[strlen] != '0' && b[strlen] != '1')
			return (0);
	}

	for (l = 1, a = 0, strlen--; strlen >= 0; strlen--, l *= 2)
	{
		if (b[strlen] == '1')
			a += l;
	}
	return (a);
}
