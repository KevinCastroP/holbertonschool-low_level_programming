
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 * Return: 0
 * Description:  n is positive, negative or zero
 */

int main(void)
{
int n;
int lastD;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastD = n % 10;

if (lastD == 0)
{
tf("Last digit of %d is %d and is 0\n", n, lastD);
}
if (lastD > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastD);
}
if (lastD < 6 && lastD != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastD);
}

return (0);
}
