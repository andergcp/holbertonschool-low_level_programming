#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* It show us if a random number is positive, negative or zero */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("is zero\n");
}
else if (n > 0)
{
printf("%i is positive\n", n);
}
else
{
printf("%i is negative\n", n);
}
return (0);
}
