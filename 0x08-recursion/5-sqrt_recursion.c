#include "holberton.h"
/**
 * rec_num - calcule racine
 * @y : int
 * @n: int
 * Return: int (mean true).
 */
int rec_num(int y, int n)
{
if (y * y == n)
{
return (y);
}
if (y * y > n)
return (-1);
else
y++;
return (rec_num(y, n));
}
/**
 *_sqrt_recursion - racine carre
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
int x;

if (n == 0)
{
return (0);
}
else
x = rec_num(1, n);
return (x);
}
