#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 */
int factorial(int n)
{
int suma1;
suma1 = 0;
if (n >= 1)
{
suma1 = (factorial(n - 1) *n);
return (suma1);
}
if (n == 0)
{
return (1);
}
else
{
return (-1);
}
} 
