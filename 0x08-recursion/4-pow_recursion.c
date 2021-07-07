#include "holberton.h"
/**
 * _pow_recursion - claculate the power of two integer
 * @x : int.
 * @y : int.
 * Return: int (mean tru).
 */
int _pow_recursion(int x, int y)
{
int res;

if (y < 0)
{
return (-1);
}
if (y >= 1)
{
res = x * _pow_recursion(x, y - 1);
return (res);
}
else
return (1);
}
