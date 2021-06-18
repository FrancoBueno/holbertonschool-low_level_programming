#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - determine if it is positive or negative
 * Return success (0)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if(n == 0)
printf("%i is is zero\n", n);
else if (n > 0)
printf("%i is is positive\n", n);
else
printf("%i is is negative\n", n);
return (0);
}
