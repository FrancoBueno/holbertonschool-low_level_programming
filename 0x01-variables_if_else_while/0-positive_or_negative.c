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
  if (n == 0)
    printf("% is zero \n",n);
    else if ( n > 0 )
      printf("% is positive\n",n);
      else
	printf("% is zero \n",n);
  return (0);
}
